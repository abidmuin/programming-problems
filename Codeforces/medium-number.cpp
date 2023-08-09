// https://codeforces.com/problemset/problem/1760/A

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
	int minNumber = 0;
	int maxNumber = 0;
	int mediumNumber = 0;

	while (testCases--)
	{
		cin >> a >> b >> c;

		minNumber = min({a, b, c});
		maxNumber = max({a, b, c});
		mediumNumber = (a + b + c) - minNumber - maxNumber;

		cout << mediumNumber << endl;
	}

	return 0;
}