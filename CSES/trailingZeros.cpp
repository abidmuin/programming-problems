// https://cses.fi/problemset/task/1618

// REFERENCE - https://www.youtube.com/watch?v=wkvVdggCSeo

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll n = 0, zeroCount = 0;
	cin >> n;

	for (ll i = 5; n / i >= 1; i *= 5)
	{
		zeroCount+=n/i;
	}
	cout << zeroCount << endl;

	return 0;
}