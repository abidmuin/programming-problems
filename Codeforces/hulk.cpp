// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	string result = "";

	for (int i = 1; i <= n; i++)
	{
		if (i & 1)
		{
			result += "I hate ";
			if (i == n)
			{
				result += "it";
			}
			else
			{
				result += "that ";
			}
		}
		else
		{
			result += "I love ";
			if (i == n)
			{
				result += "it";
			}
			else
			{
				result += "that ";
			}
		}
	}

	cout << result << endl;

	return 0;
}