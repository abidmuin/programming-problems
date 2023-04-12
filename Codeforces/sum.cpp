// https://codeforces.com/problemset/problem/1742/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int a = 0, b = 0, c = 0;

	while (testCases--)
	{
		cin >> a >> b >> c;

		if ((a + b == c) || (b + c == a) || (c + a == b))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}

		cout << "\n";
	}

	return 0;
}