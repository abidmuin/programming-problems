// https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>

using namespace std;

/*
---HASHMAP---
Time Complexity => O(N)
Space Complexity => O(N)
*/

class Solution
{
public:
	int singleNumber(vector<int> &nums)
	{
		int result = 0;

		map<int, int> m;
		map<int, int>::iterator itr;

		for (auto &&num : nums)
		{
			itr = m.find(num);

			if (itr != m.end())
			{
				itr->second++;
			}
			else
			{
				m.insert({num, 1});
			}
		}

		for (auto &&el : m)
		{
			if (el.second == 1)
			{
				result = el.first;
				break;
			}
		}

		return result;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> nums = {4, 1, 2, 1, 2};
	Solution sol;

	cout << sol.singleNumber(nums) << endl;

	return 0;
}