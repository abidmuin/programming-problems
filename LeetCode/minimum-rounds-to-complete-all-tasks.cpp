// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

#include <bits/stdc++.h>

using namespace std;

int minimumRounds(vector<int> &tasks)
{
	vector<int> uniqueTasks(tasks.size());
	int tempCount = 0;
	int minimumRounds = 0;

	partial_sort_copy(tasks.begin(), tasks.end(), uniqueTasks.begin(), uniqueTasks.end());
	int uniqueElements = distance(uniqueTasks.begin(), unique(uniqueTasks.begin(), uniqueTasks.begin() + uniqueTasks.size()));
	uniqueTasks.resize(uniqueElements);

	for (int itr : uniqueTasks)
	{
		tempCount = count(tasks.begin(), tasks.end(), itr);
		if (tempCount < 2)
		{
			return -1;
		}
		else if (tempCount % 3 == 0)
		{
			minimumRounds += (tempCount / 3);
		}
		else if (tempCount % 3 == 2)
		{
			minimumRounds += (tempCount / 3) + 1;
		}
		else if (tempCount % 2 == 0)
		{
			minimumRounds += (tempCount / 2);
		}
	}

	return minimumRounds;
}

int main()
{
	vector<int> tasks = {
		66, 66, 63, 61, 63, 63, 64, 66, 66, 65, 66, 65, 61, 67, 68, 66, 62, 67, 61, 64, 66, 60, 69, 66, 65, 68, 63, 60, 67, 62, 68, 60, 66, 64, 60, 60, 60, 62, 66, 64, 63, 65, 60, 69, 63, 68, 68, 69, 68, 61};
	cout << minimumRounds(tasks) << endl;
	return 0;
}