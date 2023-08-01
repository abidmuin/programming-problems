// https://codeforces.com/problemset/problem/1624/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int arrSize = 0;
	int tempValue = 0;
	int minValue = INT_MAX;
	int maxValue = INT_MIN;
	int result = 0;

	while (testCases--)
	{
		cin >> arrSize;

		while (arrSize--)
		{
			cin >> tempValue;

			if (tempValue < minValue)
			{
				minValue = tempValue;
			}
			if (tempValue > maxValue)
			{
				maxValue = tempValue;
			}
		}

		result = maxValue - minValue;
		cout << result << endl;

		minValue = INT_MAX;
		maxValue = INT_MIN;
		result = 0;
	}

	return 0;
}