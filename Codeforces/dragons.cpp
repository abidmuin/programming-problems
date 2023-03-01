// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int kiritoStrength = 0;
	int numberOfDragons = 0;

	cin >> kiritoStrength >> numberOfDragons;

	int dragonStrength = 0;
	int bonusStrength = 0;
	
	multimap<int, int> m;

	while (numberOfDragons--)
	{
		cin >> dragonStrength >> bonusStrength;
		m.insert({dragonStrength, bonusStrength});
	}

	bool canWin = true;

	for (auto itr : m)
	{
		if (kiritoStrength <= itr.first)
		{
			canWin = false;
			break;
		}
		else
		{
			kiritoStrength += itr.second;
		}
	}

	if (canWin)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}