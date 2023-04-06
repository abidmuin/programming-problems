// https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	long long int x = 0, y = 0, n = 0;
	long long int p = 0; // arbitary value
	long long int k = 0; // result

	while (testCases--)
	{
		cin >> x >> y >> n;
		p = floor((n - y) / x);
		k = (p * x) + y;

		cout << k << endl;
	}

	return 0;
}