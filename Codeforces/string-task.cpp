// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int stringLength = str.length();

	for (int i = 0; i < stringLength; i++)
	{
		str[i] = tolower(str[i]);
	}

	for (int i = 0; i < stringLength; i++)
	{
		if (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i')
		{
			str[i] = 0;
		}
	}

	for (int i = 0; i < stringLength; i++)
	{
		if (str[i] != 0)
		{
			cout << "." << str[i];
		}
	}
	cout << endl;

	return 0;
}