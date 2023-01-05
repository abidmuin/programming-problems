// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string number;
	cin >> number;

	int numLength = number.size();
	int luckyNumberCounter = 0;

	for (int i = 0; i < numLength; i++)
	{
		if (number[i] == '4' || number[i] == '7')
		{
			luckyNumberCounter++;
		}
	}

	if (luckyNumberCounter == 4 || luckyNumberCounter == 7)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}