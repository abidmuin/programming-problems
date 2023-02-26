// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;

	cin >> n >> m;

	vector<int> v;
	int temp = 0;

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int minDiff = INT_MAX;
	int currentDiff = -1;

	for (int i = 0; i < m; i++)
	{
		if ((i + n - 1) < m)
		{
			currentDiff = v[n - 1 + i] - v[i];
			minDiff = min(currentDiff, minDiff);
		}
	}

	cout << minDiff << endl;

	return 0;
}