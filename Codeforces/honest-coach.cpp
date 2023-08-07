// https://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int numberOfAthletes = 0;
	int minDiff = INT_MAX;
	int tempDiff = INT_MAX;

	while (testCases--)
	{
		cin >> numberOfAthletes;

		vector<int> strength(numberOfAthletes);

		for (int i = 0; i < numberOfAthletes; i++)
		{
			cin >> strength[i];
		}

		sort(strength.begin(), strength.end());

		minDiff = INT_MAX;
		tempDiff = INT_MAX;

		for (int i = 1; i < numberOfAthletes; i++)
		{
			tempDiff = strength[i] - strength[i - 1];
			minDiff = min(minDiff, tempDiff);
		}

		cout << minDiff << endl;
	}

	return 0;
}