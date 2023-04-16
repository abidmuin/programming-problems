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

	string str = "";
	int stringLength = 0;
	char previousChar = ' ';
	char currentChar = ' ';
	set<char> s;

	while (testCases--)
	{
		cin >> str;

		stringLength = str.size();

		currentChar = str[0];
		s.insert(currentChar);

		for (int i = 1; i < stringLength; i++)
		{
		}
	}

	return 0;
}
