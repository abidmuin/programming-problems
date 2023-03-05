// https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int houses = 0;
	int tasks = 0;

	cin >> houses >> tasks;

	long long int time = 0;
	int currentTask = 0;
	int currentPosition = 1;

	for (int i = 0; i < tasks; i++)
	{
		cin >> currentTask;

		if (currentTask >= currentPosition)
		{
			time += (currentTask - currentPosition);
			currentPosition = currentTask;
		}
		else
		{
			time += (houses - currentPosition) + currentTask;
			currentPosition = currentTask;
		}
	}

	cout << time << endl;

	return 0;
}