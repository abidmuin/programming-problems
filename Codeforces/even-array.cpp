// https://codeforces.com/problemset/problem/1367/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases;
	cin >> testCases;

	int arrayLength = 0;
	int oddElementsInOddIndex = 0;
	int oddElementsCounter = 0;
	int totalOddIndices = 0;
	int temp = 0;
	vector<int> v;

	while (testCases--)
	{
		cin >> arrayLength;

		for (int i = 0; i < arrayLength; i++)
		{
			cin >> temp;
			v.push_back(temp);

			if (v[i] % 2 != 0)
			{
				oddElementsCounter++;

				if (i % 2 != 0)
				{
					oddElementsInOddIndex++;
				}
			}
		}

		totalOddIndices = (arrayLength / 2);

		if (oddElementsCounter != totalOddIndices)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << (oddElementsCounter - oddElementsInOddIndex) << endl;
		}

		oddElementsCounter = 0;
		oddElementsInOddIndex = 0;
		v.clear();
	}

	return 0;
}