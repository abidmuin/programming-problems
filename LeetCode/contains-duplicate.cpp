// https://leetcode.com/problems/contains-duplicate/

class Solution
{
public:
	bool containsDuplicate(vector<int> &nums)
	{
		unordered_map<int, int> m;
		unordered_map<int, int>::iterator itr;

		for (auto num : nums)
		{
			itr = m.find(num);
			if (itr != m.end())
			{
				itr->second++;
				if (itr->second > 1)
				{
					return true;
				}
			}
			else
			{
				m.insert({num, 1});
			}
		}

		return false;
	}
};