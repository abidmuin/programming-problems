// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int firstBananaCost = 0;
	int initialCost = 0;
	int numberOfBananas = 0;
	int amount = 0;

	cin >> firstBananaCost >> initialCost >> numberOfBananas;

	for (int i = 1; i <= numberOfBananas; i++)
	{
		amount += (i * firstBananaCost);
	}
	amount -= initialCost;

	if (amount < 0)
	{
		amount = 0;
	}
	cout << amount << endl;

	return 0;
}