// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long

template <typename T>

T ceilNumber(T x, T y)
{
	return (x + y - 1) / y;
}

int main()
{
	ll int m = 0;
	ll int n = 0;
	ll int a = 0;

	cin >> n >> m >> a;

	cout << ceilNumber(m, a) * ceilNumber(n, a) << endl;

	return 0;
}