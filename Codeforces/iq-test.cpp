// https://codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int evenCounter = 0;
	int lastEven = 0, lastOdd = 0;
	int tempVal = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> tempVal;

		if (tempVal & 1)
		{
			evenCounter--;
			lastOdd = i;
		}
		else
		{
			evenCounter++;
			lastEven = i;
		}
	}

	if (evenCounter > 0)
	{
		cout << lastOdd << endl;
	}
	else
	{
		cout << lastEven << endl;
	}

	return 0;
}