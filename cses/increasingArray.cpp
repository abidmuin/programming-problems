// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll int n = 0;
	cin >> n;

	vector<ll int> v;
	ll int temp = 0;
	for (ll int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	ll int total_moves = 0, temp_moves = 0;

	for (ll int i = 0; i < n; i++)
	{
		if ((v[i] > v[i + 1]) && (i < n - 1))
		{
			temp_moves = v[i] - v[i + 1];
			v[i + 1] += temp_moves;
		}
		total_moves += temp_moves;
		temp_moves = 0;
	}

	cout << total_moves << endl;
	return 0;
}