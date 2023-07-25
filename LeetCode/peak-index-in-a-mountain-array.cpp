// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int peakIndexInMountainArray(vector<int> &arr)
	{
		int lowIndex = 0;
		int highIndex = arr.size() - 1;
		int midIndex = 0;
		int maxValueIndex = 0;

		while (lowIndex <= highIndex)
		{
			midIndex = (lowIndex + highIndex) / 2;

			if ((arr[midIndex] > arr[midIndex - 1]) && (arr[midIndex] > arr[midIndex + 1]))
			{
				maxValueIndex = midIndex;
				break;
			}
			else if (arr[midIndex] < arr[midIndex + 1])
			{
				lowIndex++;
			}
			else if (arr[midIndex] < arr[midIndex - 1])
			{
				highIndex--;
			}
		}

		return maxValueIndex;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> arr = {0, 10, 5, 2};
	Solution sol;
	cout << sol.peakIndexInMountainArray(arr) << endl;

	return 0;
}