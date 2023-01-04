// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int stringLength = str.length();
	sort(str.begin(), str.end());
	int distinctChar = distance(str.begin(), unique(str.begin(), str.end()));

	if (distinctChar % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}

	return 0;
}