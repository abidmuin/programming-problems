// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int modulo = (int)(1e9 + 7);

int main()
{
	ll n = 0;
	cin >> n;
	ll result = 1;
	for (int i = 0; i < n; i++)
	{
		result *= 2;
		result %= modulo;
	}

	cout << result << endl;

	return 0;
}