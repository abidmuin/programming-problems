// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll int n = 0;
	cin >> n;
	cout << n;

	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else if (n % 2 != 0)
		{
			n = (n * 3) + 1;
		}
		cout << " " << n;
	}

	return 0;
}