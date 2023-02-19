// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int maxSequence = 0;
	int currentMax = 1;
	int prevNumber = 0;
	int currentNumber = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> currentNumber;

		if (i == 0)
		{
			prevNumber = currentNumber;
		}
		else
		{
			if (currentNumber >= prevNumber)
			{
				currentMax++;
				prevNumber = currentNumber;
			}
			else
			{
				maxSequence = max(currentMax, maxSequence);
				currentMax = 1;
				prevNumber = currentNumber;
			}
		}
	}

	maxSequence = max(currentMax, maxSequence);

	cout << maxSequence << endl;

	return 0;
}