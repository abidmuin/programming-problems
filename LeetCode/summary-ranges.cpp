// https://leetcode.com/problems/summary-ranges/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	vector<string> summaryRanges(vector<int> &nums)
	{
		int vecSize = nums.size();
		vector<string> result;

		int currentLowerBound = INT_MIN;
		string tempResult = "";
		for (int i = 1; i < vecSize; i++)
		{
			if (nums[i] != nums[i - 1] + 1)
			{
				if (currentLowerBound == INT_MIN)
				{
					tempResult = nums[i - 1];
					result.push_back(tempResult);
					tempResult = "";
				}
				else
				{
					currentLowerBound = nums[i];
				}
			}
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> nums = {0, 1, 2, 4, 5, 7};
	vector<string> result;

	Solution sol;

	result = sol.summaryRanges(nums);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "->";
	}

	return 0;
}