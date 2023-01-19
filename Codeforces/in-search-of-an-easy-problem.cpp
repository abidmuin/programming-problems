// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int peoples = 0;
	cin >> peoples;

	int difficulty = -1;
	bool isHard = false;

	while (peoples--)
	{
		cin >> difficulty;
		if (difficulty == 1)
		{
			isHard = true;
			break;
		}
	}

	if (isHard)
	{
		cout << "HARD" << endl;
	}
	else
	{
		cout << "EASY" << endl;
	}

	return 0;
}