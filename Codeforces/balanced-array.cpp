// https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int arrLength = 0;

	while (testCases--)
	{
		cin >> arrLength;

		if ((arrLength % 4) != 0)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES" << "\n";
			
			vector<int> v;

			for (int i = 2; i <= arrLength; i += 2)
			{
				v.push_back(i);
			}

			for (int i = 1; i < arrLength; i += 2)
			{
				if ((i + 2) > arrLength)
				{
					v.push_back(i + (arrLength / 2));
				}
				else
				{
					v.push_back(i);
				}
			}

			for (auto itr : v)
			{
				cout << itr << " ";
			}
		}

		cout << "\n";
	}

	return 0;
}