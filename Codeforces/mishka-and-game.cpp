// https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfGames = 0;
	cin >> numberOfGames;

	int mishkaDice = 0;
	int chrisDice = 0;

	int mishkaWinCount = 0;
	int chrisWinCount = 0;

	while (numberOfGames--)
	{
		cin >> mishkaDice >> chrisDice;

		if (mishkaDice > chrisDice)
		{
			mishkaWinCount++;
		}
		else if (chrisDice > mishkaDice)
		{
			chrisWinCount++;
		}
	}

	if (mishkaWinCount > chrisWinCount)
	{
		cout << "Mishka" << endl;
	}
	else if (chrisWinCount > mishkaWinCount)
	{
		cout << "Chris" << endl;
	}
	else
	{
		cout << "Friendship is magic!^^" << endl;
	}

	return 0;
}