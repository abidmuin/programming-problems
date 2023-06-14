// https://leetcode.com/problems/summary-ranges/

class Solution
{
public:
	vector<string> summaryRanges(vector<int> &nums)
	{
		int vecSize = nums.size();
		vector<string> result;
		string tempResult = "";

		if (vecSize == 0)
		{
			return result;
		}

		int lowerIndex = 0;
		int currentIndex = 0;
		int higherIndex = 1;

		while (higherIndex < vecSize)
		{
			if (nums[higherIndex] == nums[currentIndex] + 1)
			{
				currentIndex = higherIndex;
			}
			else if (nums[higherIndex] != nums[currentIndex] + 1)
			{
				if (currentIndex == lowerIndex)
				{
					tempResult = to_string(nums[currentIndex]);
				}
				else
				{
					tempResult += to_string(nums[lowerIndex]);
					tempResult += "->";
					tempResult += to_string(nums[currentIndex]);
				}

				result.push_back(tempResult);
				tempResult = "";

				lowerIndex = higherIndex;
				currentIndex = higherIndex;
			}

			higherIndex++;
		}

		if (currentIndex == lowerIndex)
		{
			tempResult = to_string(nums[currentIndex]);
		}
		else
		{
			tempResult += to_string(nums[lowerIndex]);
			tempResult += "->";
			tempResult += to_string(nums[currentIndex]);
		}

		result.push_back(tempResult);

		return result;
	}
};