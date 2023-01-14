// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int friends = 0;
	int fenceHeight = 0;

	cin >> friends >> fenceHeight;

	int temp = 0;
	int minWidth = 0;

	while (friends--)
	{
		cin >> temp;

		if (temp <= fenceHeight)
		{
			minWidth++;
		}
		else
		{
			minWidth += 2;
		}
	}

	cout << minWidth << endl;

	return 0;
}