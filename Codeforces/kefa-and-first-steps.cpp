// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	int prevNumber = 0;
	int currentNumber = 0;

	cin >> prevNumber;

	int maxSequence = 1;
	int currentMax = 1;

	for (int i = 1; i < n; i++)
	{
		cin >> currentNumber;

		if (currentNumber >= prevNumber)
		{
			currentMax++;
		}
		else
		{
			currentMax = 1;
		}

		prevNumber = currentNumber;
		maxSequence = max(currentMax, maxSequence);
	}

	cout << maxSequence << endl;

	return 0;
}