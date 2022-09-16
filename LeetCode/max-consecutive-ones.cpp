// https://leetcode.com/problems/max-consecutive-ones/

class Solution
{
public:
	int findMaxConsecutiveOnes(vector<int> &nums)
	{
		int counter = 0, maxOnes = 0;
		for (auto itr = nums.begin(); itr != nums.end(); itr++)
		{
			if (*itr == 1)
			{
				counter++;
			}
			else
			{
				maxOnes = counter > maxOnes ? counter : maxOnes;
				counter = 0;
			}
		}
		maxOnes = counter > maxOnes ? counter : maxOnes;

		return maxOnes;
	}
};