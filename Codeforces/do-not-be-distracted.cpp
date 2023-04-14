// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int numberOfDays = 0;
	string originalString = "";
	string sortedString = "";

	while (testCases--)
	{
		cin >> numberOfDays;

		cin >> originalString;

		sortedString = originalString;

		sort(sortedString.begin(), sortedString.end());

		if (originalString == sortedString)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}

		cout << "\n";
	}

	return 0;
}