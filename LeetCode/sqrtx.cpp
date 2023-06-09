// https://leetcode.com/problems/sqrtx/

class Solution
{
public:
	int mySqrt(int x)
	{
		if (x == 0)
		{
			return x;
		}

		int lower = 1;
		int upper = x;
		int middle = 0;

		while (lower <= upper)
		{
			middle = lower + ((upper - lower) / 2);

			if (middle == (x / middle))
			{
				return middle;
			}
			else if (middle > (x / middle))
			{
				upper = middle - 1;
			}
			else
			{
				lower = middle + 1;
			}
		}

		return upper;
	}
};