// https://codeforces.com/problemset/problem/148/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k = 0, l = 0, m = 0, n = 0, d = 0;
	cin >> k >> l >> m >> n >> d;

	if ((k == 1) || (l == 1) || (m == 1) || (n == 1))
	{
		cout << d << endl;
	}
	else
	{
		int dragonCount = 0;

		for (int i = 1; i <= d; i++)
		{
			if (!(i % k) || !(i % l) || !(i % m) || !(i % n))
			{
				dragonCount++;
			}
		}

		cout << dragonCount << endl;
	}

	return 0;
}