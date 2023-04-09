// https://codeforces.com/problemset/problem/1692/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int a = 0, b = 0, c = 0, d = 0;
	int result = 0;

	while (testCases--)
	{
		cin >> a >> b >> c >> d;

		if (a < b)
		{
			result++;
		}
		if (a < c)
		{
			result++;
		}
		if (a < d)
		{
			result++;
		}

		cout << result << "\n";
		result = 0;
	}

	return 0;
}
