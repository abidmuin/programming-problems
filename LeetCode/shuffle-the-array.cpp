// https://leetcode.com/problems/shuffle-the-array/

#include <bits/stdc++.h>

using namespace std;

// NAIVE APPROACH
class Solution
{
public:
	vector<int> shuffle(vector<int> &nums, int n)
	{
		vector<int> firstPart;
		vector<int> secondPart;

		int vecSize = nums.size();

		for (int i = 0; i < vecSize; i++)
		{
			if (i < n)
			{
				firstPart.push_back(nums[i]);
			}
			else
			{
				secondPart.push_back(nums[i]);
			}
		}
		int splitVecSize = vecSize / 2;
		nums.clear();

		for (int i = 0; i < splitVecSize; i++)
		{
			nums.push_back(firstPart[i]);
			nums.push_back(secondPart[i]);
		}

		return nums;
	}
};

int main()
{
	Solution sol;

	int n = 3;
	vector<int> nums = {2, 5, 1, 3, 4, 7};
	vector<int> result;

	result = sol.shuffle(nums, n);

	for (auto itr : result)
	{
		cout << itr << " ";
	}
	cout << endl;

	return 0;
}