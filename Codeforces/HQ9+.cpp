// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	for (auto ch : str)
	{
		if (ch == 'H' || ch == 'Q' || ch == '9')
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}