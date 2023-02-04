// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str1 = "";
	string str2 = "";

	cin >> str1 >> str2;

	int stringSize = str1.size();
	string result = "";
	for (int i = 0; i < stringSize; i++)
	{
		if (str1[i] == str2[i])
		{
			result += "0";
		}
		else
		{
			result += "1";
		}
	}

	cout << result << endl;

	return 0;
}