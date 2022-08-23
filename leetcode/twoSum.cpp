// https://leetcode.com/problems/two-sum/submissions/

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		map<int, int> m;
		map<int, int>::iterator itr;
		vector<int> v;

		int n = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			n = target - nums[i];
			itr = m.find(n);

			if (itr != m.end())
			{
				v.push_back(itr->second);
				v.push_back(i);
			}
			else
			{
				m.insert({nums[i], i});
			}
		}

		return v;
	}
};