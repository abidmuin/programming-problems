// https://leetcode.com/problems/gas-station/discussion/

#include <bits/stdc++.h>

using namespace std;

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
		currentGas = gas[i] - cost[i];
		if (currentGas < 0)
		{
			startingIndex = i + 1;
			currentGas = 0;
		}
		else
		{
			startingIndex = i;
		}
	}

	return startingIndex;
}

int main()
{
	vector<int> gas = {1, 2, 3, 4, 5};
	vector<int> cost = {3, 4, 5, 1, 2};

	cout << canCompleteCircuit(gas, cost);

	return 0;
}