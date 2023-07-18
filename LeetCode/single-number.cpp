// https://leetcode.com/problems/single-number/

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

/*
---XOR---
Time Complexity => O(N)
Space Complexity => O(1)
*/

class Solution
{
public:
	int singleNumber(vector<int> &nums)
	{
		int result = 0;

		for (auto &&num : nums)
		{
			result ^= num;
		}

		return result;
	}
};