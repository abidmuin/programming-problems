// https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int vecSize = 0;
	while (testCases--)
	{
		cin >> vecSize;
		vector<int> v(vecSize);

		for (int i = 0; i < vecSize; i++)
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < vecSize; i++)
		{
			if (((v[i + 1] - v[i]) > 1) &&
				((i + 1) < v.size()))
			{
				cout << "NO";
				break;
			}
			else if ((i + 1) == v.size())
			{
				cout << "YES";
				break;
			}
		}

		cout << "\n";
	}

	return 0;
}