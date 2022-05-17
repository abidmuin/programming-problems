// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t = 0, a = 0, b = 0;
	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		if ((a + b) % 3 != 0 || a > 2 * b || b > 2 * a)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}

	return 0;
}