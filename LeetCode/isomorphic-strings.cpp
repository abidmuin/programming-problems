// https://leetcode.com/problems/isomorphic-strings/

class Solution
{
public:
	bool isIsomorphic(string s, string t)
	{
		int stringSize = s.size();
		int s_map[128] = {0};
		int t_map[128] = {0};

		for (int i = 0; i < stringSize; i++)
		{
			if (s_map[s[i]] != t_map[t[i]])
			{
				return false;
			}

			s_map[s[i]] = i + 1;
			t_map[t[i]] = i + 1;
		}

		return true;
	}
};