// https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int totalProblems = 0;
	int timeToReach = 0;

	cin >> totalProblems >> timeToReach;

	int totalMinutes = 240;
	int remainingMinutes = totalMinutes - timeToReach;
	int result = 0;

	for (int i = 1; i <= totalProblems; i++)
	{
		if (remainingMinutes >= (i * 5))
		{
			result++;
			remainingMinutes -= (i * 5);
		}
		else
		{
			break;
		}
	}

	cout << result << endl;

	return 0;
}