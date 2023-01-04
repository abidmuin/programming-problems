// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfStones = 0;
	cin >> numberOfStones;

	string str;
	cin >> str;

	int _count = 0;
	for (int i = 0; i < numberOfStones; i++)
	{
		if (str[i] == 'R' && str[i + 1] == 'R' && str[i + 1] != '\0')
		{
			_count++;
		}
		if (str[i] == 'G' && str[i + 1] == 'G' && str[i + 1] != '\0')
		{
			_count++;
		}
		if (str[i] == 'B' && str[i + 1] == 'B' && str[i + 1] != '\0')
		{
			_count++;
		}
	}
	cout << _count << endl;

	return 0;
}