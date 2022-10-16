// https://leetcode.com/problems/third-maximum-number/

class Solution
{
public:
	int thirdMax(vector<int> &nums)
	{
		long long int thirdMax = LONG_MIN;
		long long int secondMax = LONG_MIN;
		long long int firstMax = LONG_MIN;

		for (long long int num : nums)
		{
			if ((num == firstMax) || (num == secondMax) || (num == thirdMax))
			{
				continue;
			}
			if (num > firstMax)
			{
				thirdMax = secondMax;
				secondMax = firstMax;
				firstMax = num;
			}
			else if (num > secondMax)
			{
				thirdMax = secondMax;
				secondMax = num;
			}
			else if (num > thirdMax)
			{
				thirdMax = num;
			}
		}

		if (thirdMax == LONG_MIN)
		{
			return firstMax;
		}
		else
		{
			return thirdMax;
		}
	}
};
