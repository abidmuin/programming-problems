// https://codeforces.com/problemset/problem/1619/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	string str = "";

	int firstPointer = 0;
	int secondPointer = 0;
	bool isSquare = true;

	while (testCases--)
	{
		isSquare = true;
		
		cin >> str;

		if (str.size() % 2 != 0)
		{
			isSquare = false;
		}
		else
		{
			firstPointer = 0;
			secondPointer = str.size() / 2;

			for (int i = 0; i < str.size() / 2; i++)
			{
				if (str[firstPointer] != str[secondPointer])
				{
					isSquare = false;
					break;
				}
				firstPointer++;
				secondPointer++;
			}
		}

		if (isSquare)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}