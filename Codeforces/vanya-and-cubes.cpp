// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int totalCubes = 0;
	cin >> totalCubes;

	int maxHeight = 1;
	int cubesUsed = 0;

	while (cubesUsed <= totalCubes)
	{
		cubesUsed += (maxHeight * (maxHeight + 1)) / 2;

		if (cubesUsed <= totalCubes)
		{
			maxHeight++;
		}
		else
		{
			maxHeight--;
			break;
		}
	}

	maxHeight = maxHeight <= 0 ? 1 : maxHeight;
	cout << maxHeight << endl;

	return 0;
}