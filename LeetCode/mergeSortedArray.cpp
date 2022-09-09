// https://leetcode.com/problems/merge-sorted-array/

class Solution
{
public:
	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
	{
		int mIndex = m - 1;
		int nIndex = n - 1;
		int pointer = m + n - 1;

		while (mIndex >= 0 && nIndex >= 0)
		{
			if (nums2[nIndex] > nums1[mIndex])
			{
				nums1[pointer] = nums2[nIndex];
				pointer--;
				nIndex--;
			}
			else
			{
				nums1[pointer] = nums1[mIndex];
				mIndex--;
				pointer--;
			}
		}

		while (nIndex >= 0)
		{
			nums1[pointer] = nums2[nIndex];
			pointer--;
			nIndex--;
		}
	}
};