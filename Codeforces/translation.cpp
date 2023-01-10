// https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string str1, str2;
	cin >> str1 >> str2;

	int strLength = str1.size();

	for (int i = 0; i < strLength; i++)
	{
		if (str1[i] != str2[strLength - i - 1])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}