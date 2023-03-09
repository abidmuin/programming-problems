// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x1 = 0, x2 = 0, x3 = 0;

	cin >> x1 >> x2 >> x3;

	int low = 0, mid = 0, high = 0;
	int distance1 = 0, distance2 = 0;

	high = max({x1, x2, x3});
	low = min({x1, x2, x3});
	mid = (x1 + x2 + x3) - (low + high);

	distance1 = high - mid;
	distance2 = mid - low;

	cout << distance1 + distance2 << endl;

	return 0;
}