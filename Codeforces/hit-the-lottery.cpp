// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int minBills = 0;

	while (n > 0)
	{
		if (n >= 100)
		{
			minBills += n / 100;
			n = n % 100;
		}
		else if (n >= 20)
		{
			minBills += n / 20;
			n = n % 20;
		}
		else if (n >= 10)
		{
			minBills += n / 10;
			n = n % 10;
		}
		else if (n >= 5)
		{
			minBills += n / 5;
			n = n % 5;
		}
		else if (n >= 1)
		{
			minBills += n / 1;
			n = n % 1;
		}
	}

	cout << minBills << endl;

	return 0;
}