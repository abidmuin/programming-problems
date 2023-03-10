// https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0, a = 0, b = 0, c = 0;
	cin >> n >> a >> b >> c;

	vector<int> dp(n + 1, 0);

	int x = -1, y = -1, z = -1;

	for (int i = 1; i <= n; i++)
	{
		if (i >= a)
		{
			x = dp[i - a];
		}
		if (i >= b)
		{
			y = dp[i - b];
		}
		if (i >= c)
		{
			z = dp[i - c];
		}

		if (x == -1 && y == -1 && z == -1)
		{
			dp[i] = -1;
		}
		else
		{
			dp[i] = max({x, y, z}) + 1;
		}
	}

	cout << dp[n] << endl;

	return 0;
}