// https://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	string str;
	int strSize = 0;
	int firstDigit = 0;
	int result = 0;

	while (testCases--)
	{
		cin >> str;

		firstDigit = str[0] - '0';
		strSize = str.size();

		result = ((firstDigit - 1) * 10) + ((strSize * (strSize + 1)) / 2);

		cout << result << endl;
	}

	return 0;
}