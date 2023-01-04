// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int row = 5;
	int col = 5;
	int tempNumber = -1;
	int minMoves = -1;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cin >> tempNumber;
			if (tempNumber == 1)
			{
				minMoves = abs(3-i) + abs(3-j);
				cout << minMoves << endl;
				return 0;
			}
		}
	}
}
