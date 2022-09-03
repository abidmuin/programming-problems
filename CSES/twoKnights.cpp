// https://cses.fi/problemset/task/1072
// SOLUTION REFERENCE - https://www.youtube.com/watch?v=RlpM5N-ttcU

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		ll int totalMoves = 0, attackMoves = 0;

		totalMoves = (pow(i, 4) - pow(i, 2)) / 2;
		attackMoves = 2 * 2 * (i - 1) * (i - 2);

		cout << totalMoves - attackMoves << endl;
	}

	return 0;
}