// https://leetcode.com/problems/gas-station/

class Solution
{
public:
	int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
	{
		int gasLength = gas.size();
		int totalGas = 0;
		int totalCost = 0;

		for (int i = 0; i < gasLength; i++)
		{
			totalGas += gas[i];
			totalCost += cost[i];
		}

		if (totalGas < totalCost)
		{
			return -1;
		}

		int currentGas = 0;
		int startingIndex = 0;

		for (int i = 0; i < gasLength; i++)
		{
			currentGas += gas[i] - cost[i];
			if (currentGas < 0)
			{
				startingIndex = i + 1;
				currentGas = 0;
			}
		}

		return startingIndex;
	}
};