// https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string guestName;
	string residentHost;
	string lettersPile;

	cin >> guestName >> residentHost >> lettersPile;

	int str[26] = {0};

	for (auto ch : guestName)
	{
		str[ch - 'A']++;
	}

	for (auto ch : residentHost)
	{
		str[ch - 'A']++;
	}

	bool isPossible = true;

	for (auto ch : lettersPile)
	{
		if (str[ch - 'A'] > 0)
		{
			str[ch - 'A']--;
		}
		else
		{
			isPossible = false;
			break;
		}
	}

	for (auto ch : str)
	{
		if (ch > 0)
		{
			isPossible = false;
			break;
		}
	}

	if (isPossible)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}