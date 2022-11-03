// https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution
{
public:
	int dominantIndex(vector<int> &nums)
	{
		int maxIndex = -1;
		int maxNumber = -1;

		int tempNumber = 0;
		int arraySize = nums.size();

		for (int i = 0; i < arraySize; i++)
		{
			tempNumber = nums[i];
			if (tempNumber > maxNumber)
			{
				maxNumber = tempNumber;
				maxIndex = i;
			}
		}

		for (int i = 0; i < arraySize; i++)
		{
			if (((2 * nums[i]) > maxNumber) && (i != maxIndex))
			{
				maxIndex = -1;
				break;
			}
		}

		return maxIndex;
	}
};