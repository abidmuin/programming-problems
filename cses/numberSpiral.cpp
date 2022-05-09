// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll int t = 0, x = 0, y = 0;

	cin >> t;
	while (t--)
	{
		cin >> y >> x;

		// ROW == COL i.e DIAGONAL
		if (y == x)
		{
			cout << (y * y) - y + 1 << endl;
		}
		// ROW > COL
		else if (y > x)
		{
			// ODD
			if ((y & 1) == 1)
			{
				cout << (y - 1) * (y - 1) + x << endl;
			}
			// EVEN
			else
			{
				cout << (y * y) - x + 1 << endl;
			}
		}
		// COL > ROW
		else
		{
			// ODD
			if ((x & 1) == 1)
			{
				cout << (x * x) - y + 1 << endl;
			}
			// EVEN
			else
			{
				cout << (x - 1) * (x - 1) + y << endl;
			}
		}
	}
	return 0;
}