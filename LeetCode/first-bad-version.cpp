// https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
	int firstBadVersion(int n)
	{
		int lowPointer = 1;
		int highPointer = n;
		int mid = 0;

		while (lowPointer < highPointer)
		{
			mid = lowPointer + (highPointer - lowPointer) / 2;

			if (isBadVersion(mid))
			{
				highPointer = mid;
			}
			else
			{
				lowPointer = mid + 1;
			}
		}
		return lowPointer;
	}
};