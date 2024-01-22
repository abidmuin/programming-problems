// https://leetcode.com/problems/set-mismatch/

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	vector<int> findErrorNums(vector<int> &nums)
	{
		// sort(nums.begin(), nums.end());
		int vecSize = nums.size();
		set<int> idealNums;
		vector<int> result;

		for (int i = 0; i < vecSize; i++)
		{
			idealNums.insert(i + 1);
		}

		for (auto itr = idealNums.begin(); itr != idealNums.end(); itr++)
		{
			cout << *itr << " ";
		}
		cout << endl;

		int duplicateNumber = 0;

		for (int i = 0; i < vecSize; i++)
		{
			duplicateNumber ^= nums[i];

			if (duplicateNumber)
			{
				cout << duplicateNumber << endl;
				cout << nums[i] << endl;

				break;
			}
		}

		sort(nums.begin(), nums.end());
		for (int i = 0; i < vecSize; i++)
		{
			auto isFound = idealNums.find(nums[i]) != idealNums.end();
			if (!isFound)
			{
				result.push_back(nums[i]);
				result.push_back(idealNums[i]);
			}
		}

		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			cout << *itr << " ";
		}
		cout << endl;

		return result;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> nums = {3, 2, 3, 4, 6, 5};
	vector<int> result;
	Solution sol;
	result = sol.findErrorNums(nums);

	cout << "Inside main" << endl;

	for (auto itr = result.begin(); itr != result.end(); itr++)
	{
		cout << *itr << " ";
	}

	return 0;
}