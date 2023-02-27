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

	map<char, int> m;
	map<char, int>::iterator itr;

	for (auto ch : guestName)
	{
		itr = m.find(ch);

		if (itr != m.end())
		{
			m[ch]++;
		}
		else
		{
			m.insert({ch, 1});
		}
	}

	for (auto ch : residentHost)
	{
		itr = m.find(ch);

		if (itr != m.end())
		{
			m[ch]++;
		}
		else
		{
			m.insert({ch, 1});
		}
	}

	bool isPossible = true;

	for (auto ch : lettersPile)
	{
		itr = m.find(ch);

		if (itr != m.end())
		{
			if (m[ch] > 0)
			{
				m[ch]--;
			}
			else
			{
				isPossible = false;
				break;
			}
		}
		else
		{
			isPossible = false;
			break;
		}
	}

	for (auto itr : m)
	{
		if (itr.second > 0)
		{
			isPossible = false;
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