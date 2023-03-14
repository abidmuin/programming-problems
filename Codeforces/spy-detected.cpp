// https://codeforces.com/problemset/problem/1512/A

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
	int element1 = 0, element1Count = 0;
	int element2 = 0, element2Count = 0;
	int oddElement = 0;

	while (testCases--)
	{
		cin >> vecSize;
		vector<int> v(vecSize);

		cin >> v[0] >> v[1];
		element1 = v[0];
		element2 = v[1];

		if (element1 == element2)
		{
			element1Count = 2;
			element2 = 0;
		}
		else
		{
			element1Count++;
			element2Count++;
		}

		for (int i = 2; i < vecSize; i++)
		{
			cin >> v[i];

			// if ((v[i] != element1) && (element2Count == 0))
			// {
			// 	cout << i << endl;
			// 	break;
			// }
			if (v[i] == element1)
			{
				element1Count++;
				// if (element1Count > 1)
				// {
				// 	break;
				// }
			}
			else
			{
				element2 = v[i];
				element2Count++;
				// if (element2Count > 1)
				// {
				// 	break;
				// }
			}
		}

		// for (auto itr : v)
		// {
		// 	cout << itr << " ";
		// }
		// cout << endl;

		element1Count == 1 ? (oddElement = element1) : (oddElement = element2);

		for (int i = 0; i < vecSize; i++)
		{
			if (v[i] == oddElement)
			{
				cout << (i + 1) << endl;
			}
		}

		element1 = 0;
		element1Count = 0;

		element2 = 0;
		element2Count = 0;

		oddElement = 0;
	}

	return 0;
}

/*
11 13 11 11

1 4 4 4 4

3 3 3 3 10 3 3 3 3 3

20 20 10
*/