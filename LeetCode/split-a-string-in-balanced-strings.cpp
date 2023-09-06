// https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution
{
public:
	int balancedStringSplit(string s)
	{
		int balanceStatus = 0;
		int result = 0;

		for (auto &&ch : s)
		{
			if (ch == 'R')
			{
				balanceStatus++;
			}
			else if (ch == 'L')
			{
				balanceStatus--;
			}

			if (balanceStatus == 0)
			{
				result++;
			}
		}

		return result;
	}
};