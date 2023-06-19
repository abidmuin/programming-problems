// https://leetcode.com/problems/find-the-highest-altitude/

class Solution
{
public:
	int largestAltitude(vector<int> &gain)
	{
		int maxGain = 0;
		int tempGain = 0;

		for (int value : gain)
		{
			tempGain += value;
			maxGain = max(maxGain, tempGain);
		}

		return maxGain;
	}
};