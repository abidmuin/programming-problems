// https://leetcode.com/problems/to-lower-case/description/

class Solution
{
public:
	string toLowerCase(string s)
	{
		for (auto &&ch : s)
		{
			if (isupper(ch))
			{
				ch = tolower(ch);
			}
		}

		return s;
	}
};