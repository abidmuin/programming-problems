// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCase = 0;
	cin >> testCase;

	int x = INT_MIN, y = INT_MIN, z = INT_MIN;
	int sumX = 0, sumY = 0, sumZ = 0;

	for (int i = 0; i < testCase; i++)
	{
		cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}

	if (!sumX && !sumY && !sumZ)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}