// https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfContests = 0;
	cin >> numberOfContests;

	int bestPerformance = 0;
	int worstPerformance = 0;
	int currentPerformance = 0;
	int result = 0;

	cin >> currentPerformance;

	bestPerformance = currentPerformance;
	worstPerformance = currentPerformance;
	numberOfContests--;

	while (numberOfContests--)
	{
		cin >> currentPerformance;

		if (currentPerformance > bestPerformance)
		{
			result++;
			bestPerformance = currentPerformance;
		}

		if (currentPerformance < worstPerformance)
		{
			result++;
			worstPerformance = currentPerformance;
		}
	}

	cout << result << endl;

	return 0;
}