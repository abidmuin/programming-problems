// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution
{
public:
	int findNumbers(vector<int> &nums)
	{
		int counter = 0, len = 0;
		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			len = to_string(*itr).size();
			if ((len & 1) == 0)
			{
				counter++;
			}
		}
		return counter;
	}
};