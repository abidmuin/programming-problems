// https://codeforces.com/problemset/problem/707/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int row = 0;
	int col = 0;

	char ch;

	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> ch;

			if (ch == 'C' || ch == 'M' || ch == 'Y')
			{
				cout << "#Color" << endl;
				return 0;
			}
		}
	}

	cout << "#Black&White" << endl;

	return 0;
}