// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int majorityElement(vector<int> &nums)
	{
		int result = 0;
		int vecSize = nums.size();

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

		for (auto &&i : m)
		{
			if ((i.second) > (vecSize / 2))
			{
				cout << i.first << " " << i.second << endl;
				result = i.first;
			}
		}

		return result;
	}
};