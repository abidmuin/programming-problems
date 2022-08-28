// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
	int removeDuplicates(vector<int> &nums)
	{
		vector<int>::iterator itr;

		itr = unique(nums.begin(), nums.end());

		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			cout << *itr << " ";
		}
		cout << endl;

		nums.resize(distance(nums.begin(), itr));

		return nums.size();
	}
};