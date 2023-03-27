// https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int k = 0;
	int sequenceCounter = 0;

	while (testCases--)
	{
		cin >> k;

		for (int i = 1;; i++)
		{
			if ((i % 3 == 0) || (i % 10 == 3))
			{
				continue;
			}
			else
			{
				sequenceCounter++;
			}

			if (sequenceCounter == k)
			{
				cout << i << "\n";
				sequenceCounter = 0;
				break;
			}
		}
	}

	return 0;
}