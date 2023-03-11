// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int friends = 0, bottles = 0, amountOfDrink = 0;
	int limes = 0, slices = 0, amountOfSalt = 0;
	int requiredAmountOfDrink = 0, requiredAmountOfSalt = 0;

	cin >> friends >> bottles >> amountOfDrink >> limes >> slices >> amountOfSalt >> requiredAmountOfDrink >> requiredAmountOfSalt;

	int possibleAmountOfDrink = (bottles * amountOfDrink) / requiredAmountOfDrink;
	int possibleAmountOfLimes = (limes * slices);
	int possibleAmountOfSalt = (amountOfSalt / requiredAmountOfSalt);

	cout << (min({possibleAmountOfDrink, possibleAmountOfLimes, possibleAmountOfSalt}) / friends) << endl;

	return 0;
}