// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n = 0, k = 0;
	cin >> n >> k;

	long long int midPoint = 0;
	bool inFirstHalf = false;

	if ((n & 1) == 0)
	{
		midPoint = n / 2;
		if (k <= midPoint)
		{
			inFirstHalf = true;
		}
	}
	else
	{
		midPoint = (n / 2) + 1;
		if (k <= midPoint)
		{
			inFirstHalf = true;
		}
	}

	if (inFirstHalf)
	{
		// nth odd number => 2n-1
		cout << (2 * k) - 1 << endl;
	}
	else
	{
		// nth even number => 2n
		cout << (2 * (k - midPoint)) << endl;
	}

	return 0;
}