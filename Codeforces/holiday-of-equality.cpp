// https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int citizens = 0;
	cin >> citizens;

	if (citizens < 2)
	{
		cout << 0 << endl;

		return 0;
	}

	vector<int> v(citizens);

	for (int i = 0; i < citizens; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int highestBurles = v[citizens - 1];
	int minCharges = 0;

	for (int i = 0; i < (citizens - 1); i++)
	{
		minCharges += (highestBurles - v[i]);
	}

	cout << minCharges << endl;

	return 0;
}