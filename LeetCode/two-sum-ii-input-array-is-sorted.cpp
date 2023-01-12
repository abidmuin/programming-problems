// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution
{
public:
	vector<int> twoSum(vector<int> &numbers, int target)
	{
		int leftPointer = 0;
		int rightPointer = numbers.size() - 1;

		while (leftPointer < rightPointer)
		{
			if ((numbers[leftPointer] + numbers[rightPointer]) > target)
			{
				rightPointer--;
			}
			else if ((numbers[leftPointer] + numbers[rightPointer]) < target)
			{
				leftPointer++;
			}
			else
			{
				return {leftPointer + 1, rightPointer + 1};
			}
		}

		return {};
	}
};