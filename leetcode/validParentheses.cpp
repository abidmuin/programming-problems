// https://leetcode.com/problems/valid-parentheses/

class Solution
{
public:
	bool isValid(string s)
	{
		if (s[0] == ')' || s[0] == '}' || s[0] == ']' || s.size() == 1)
		{
			return false;
		}
		else
		{
			map<char, char> m;
			map<char, char>::iterator itr;
			m.insert({')', '('});
			m.insert({'}', '{'});
			m.insert({']', '['});

			stack<char> st;

			for (int i = 0; i < s.size(); i++)
			{
				itr = m.find(s[i]);
				if (itr != m.end() && !st.empty())
				{
					if (itr->second == st.top())
					{
						st.pop();
					}
					else
					{
						return false;
					}
				}
				else
				{
					st.push(s[i]);
				}
			}
			if (st.empty())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
};