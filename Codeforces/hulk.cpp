// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	if (n == 1)
	{
		cout << "I hate it" << endl;
	}

	string result = "";

	while (n--)
	{
		if ((n & 1) != 0)
		{
			result += "I love ";
		}
	}

	return 0;
}