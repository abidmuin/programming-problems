// https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t = 0;			 // test cases
	long long int n = 0; // number of candies

	cin >> t;

	while (t--)
	{
		cin >> n;

		if (n < 3)
		{
			cout << 0 << "\n";
		}
		else if (n & 1)
		{
			cout << (n / 2) << "\n";
		}
		else
		{
			cout << (n / 2) - 1 << "\n";
		}
	}

	return 0;
}