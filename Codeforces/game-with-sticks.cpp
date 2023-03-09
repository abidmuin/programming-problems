// https://codeforces.coms/problemset/problem/451/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m = 0, n = 0;
	cin >> m >> n;

	int minValue = min(m, n);

	if (minValue & 1)
	{
		cout << "Akshat" << endl;
	}
	else
	{
		cout << "Malvika" << endl;
	}

	return 0;
}