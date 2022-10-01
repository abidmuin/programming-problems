// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int indexOfSign = 0;
	int stringLength = str.length();

	sort(str.begin(), str.end());

	for (int i = 0; i < stringLength; i++)
	{
		if (str[i] == '+')
			indexOfSign++;
	}

	str.erase(0, indexOfSign);

	for (int i = 0; i < stringLength; i++)
	{
		if ((str[i] >= '1' && str[i] <= '3') && (i + 1 < stringLength))
		{

			str.insert((i + 1), "+");
		}
	}

	cout << str << endl;

	return 0;
}
