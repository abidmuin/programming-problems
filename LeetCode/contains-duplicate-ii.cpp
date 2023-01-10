// https://leetcode.com/problems/contains-duplicate-ii/

class Solution
{
public:
	bool containsNearbyDuplicate(vector<int> &nums, int k)
	{
		unordered_map<int, int> m;
		unordered_map<int, int>::iterator itr;

		int vecSize = nums.size();
		int indexDiff = 0;

		for (int i = 0; i < vecSize; i++)
		{
			itr = m.find(nums[i]);

			if (itr != m.end())
			{
				indexDiff = abs(itr->second - i);

				if (indexDiff <= k)
				{
					return true;
				}
				else
				{
					itr->second = i;
				}
			}
			else
			{
				m.insert({nums[i], i});
			}
		}

		return false;
	}
};