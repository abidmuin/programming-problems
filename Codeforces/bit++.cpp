// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfStatements = 0;
	cin >> numberOfStatements;

	string statement = "";
	int value = 0;

	while (numberOfStatements--)
	{
		cin >> statement;
		if (statement[0] == '+' || statement[1] == '+')
		{
			value++;
		}
		else
		{
			value--;
		}
	}

	cout << value << endl;

	return 0;
}
