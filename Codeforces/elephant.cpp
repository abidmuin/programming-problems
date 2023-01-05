// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int coordinate = 0;
	cin >> coordinate;

	int minSteps = 0;

	if (coordinate % 5 == 0)
	{
		minSteps = coordinate / 5;
	}
	else
	{
		minSteps = (coordinate + 5) / 5;
	}

	cout << minSteps << endl;

	return 0;
}