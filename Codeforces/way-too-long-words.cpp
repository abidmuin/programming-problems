// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCase = 0;
	cin >> testCase;

	string str;
	for (int i = 0; i < testCase; i++)
	{
		cin >> str;
		if (str.length() > 10)
		{
			cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
		}
		else
		{
			cout << str << endl;
		}
	}
	return 0;
}
