// https://leetcode.com/problems/flip-string-to-monotone-increasing/

/*
Time Complexity => O(n)
Space Complexity => O(1)
*/

class Solution
{
public:
	int minFlipsMonoIncr(string s)
	{
		int minFlip = 0;
		int countOne = 0;

		for (auto ch : s)
		{
			if (ch == '1')
			{
				countOne++;
			}
			else
			{
				minFlip = min(minFlip + 1, countOne);
			}
		}

		return minFlip;
	}
};