// https://leetcode.com/problems/set-mismatch/

class Solution
{
public:
	vector<int> findErrorNums(vector<int> &nums)
	{
		set<int> idealNums;
		vector<int> result(2, 0);

		int numSize = nums.size();
		int duplicateNumber = 0, missingNumber = 0;
		int currentSum = 0, expectedSum = 0;

		expectedSum = (numSize * (numSize + 1)) / 2;

		for (int num : nums)
		{
			if (!idealNums.count(num))
			{
				idealNums.insert(num);
				currentSum += num;
			}
			else
			{
				duplicateNumber = num;
			}
		}

		missingNumber = expectedSum - currentSum;

		result[0] = duplicateNumber;
		result[1] = missingNumber;

		return result;
	}
};