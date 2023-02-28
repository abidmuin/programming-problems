// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int row = 0;
	int col = 0;

	cin >> row >> col;

	bool isLastPosition = true;

	for (int i = 1; i <= row; i++)
	{
		if (i & 1)
		{
			for (int j = 1; j <= col; j++)
			{
				cout << "#";
			}
		}
		else
		{
			if (isLastPosition)
			{
				for (int j = 1; j < col; j++)
				{
					cout << ".";
				}

				cout << "#";
				isLastPosition = false;
			}
			else
			{
				cout << "#";

				for (int j = 2; j <= col; j++)
				{
					cout << ".";
				}

				isLastPosition = true;
			}
		}

		cout << "\n";
	}

	return 0;
}