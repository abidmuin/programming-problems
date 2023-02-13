// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

class Solution
{
public:
	int countOdds(int low, int high)
	{
		if (((low & 1) == 0) && ((high & 1) == 0))
		{
			return (high - low) / 2;
		}
		else
		{
			return ((high - low) / 2) + 1;
		}
	}
};