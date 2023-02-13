// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	int a = 0;
	int b = 0;
	int steps = 0;

	while (t--)
	{
		cin >> a >> b;
		if (a % b == 0)
		{
			steps = 0;
			cout << steps << "\n";
		}
		else
		{
			steps = (((a / b) + 1) * b) - a;
			cout << steps << "\n";
		}
	}

	return 0;
}