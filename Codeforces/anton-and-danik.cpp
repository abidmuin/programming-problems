// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfGames = 0;
	cin >> numberOfGames;

	string result;
	cin >> result;

	int antonWins = 0;
	int danikWins = 0;

	for (char ch : result)
	{
		if (ch == 'A')
		{
			antonWins++;
		}
		else
		{
			danikWins++;
		}
	}

	if (antonWins > danikWins)
	{
		cout << "Anton" << endl;
	}
	else if (danikWins > antonWins)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout << "Friendship" << endl;
	}

	return 0;
}