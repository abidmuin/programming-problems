// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int weight = 0;
	cin >> weight;

	if (weight > 3 && (weight & 1) == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
