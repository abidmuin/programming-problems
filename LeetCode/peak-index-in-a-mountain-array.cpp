// https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution
{
public:
	int peakIndexInMountainArray(std::vector<int> &arr)
	{
		int left = 0;
		int right = arr.size() - 1;
		int mid = 0;

		while (left < right)
		{
			mid = (left + right) >> 1;

			if (arr[mid] < arr[mid + 1])
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}

		return left;
	}
};