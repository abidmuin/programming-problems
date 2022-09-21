// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string string1;
	string string2;

	cin >> string1 >> string2;

	int stringLength = string1.size();

	for (int i = 0; i < stringLength; i++)
	{
		if ((int)string1[i] < (int)string2[i])
		{
			cout << -1 << endl;
			break;
		}
		else if ((int)string1[i] > (int)string2[i])
		{
			cout << 1 << endl;
			break;
		}
		else
		{
			cout << 0 << endl;
			break;
		}
	}

	return 0;
}