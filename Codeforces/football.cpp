// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string players;
	cin >> players;

	int playersCount = players.size();
	int zeroTeam = 0;
	int oneTeam = 0;

	for (int i = 0; i < playersCount; i++)
	{
		if (players[i] == '0')
		{
			zeroTeam++;
			oneTeam = 0;
		}
		else
		{
			oneTeam++;
			zeroTeam = 0;
		}
		if (zeroTeam >= 7 || oneTeam >= 7)
		{
			break;
		}
	}

	if (zeroTeam >= 7 || oneTeam >= 7)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}