// https://codeforces.com/problemset/problem/1703/A

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

	while (testCases--)
	{
		cin >> str;

		transform(str.begin(), str.end(), str.begin(), ::tolower);

		cout << str << endl;

		if (str == "yes")
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