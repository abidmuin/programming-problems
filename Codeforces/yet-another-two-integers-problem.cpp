// https://codeforces.com/problemset/problem/1409/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int a = 0, b = 0;
	int difference = 0;
	int minMoves = 0;

	while (testCases--)
	{
		cin >> a >> b;

		difference = abs(a - b);

		if (difference % 10)
		{
			minMoves = (difference / 10) + 1;
		}
		else
		{
			minMoves = difference / 10;
		}

		cout << minMoves << endl;

		difference = 0;
		minMoves = 0;
	}

	return 0;
}