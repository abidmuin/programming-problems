// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfChildren = 0;
	cin >> numberOfChildren;

	int count1 = 0, count2 = 0, count3 = 0;
	int skill = 0;

	multimap<int, int> m;
	multimap<int, int>::iterator itr;

	for (int i = 1; i <= numberOfChildren; i++)
	{
		cin >> skill;

		m.insert({skill, i});

		if (skill == 1)
		{
			count1++;
		}
		else if (skill == 2)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}

	int maxPossibleTeams = min({count1, count2, count3});
	cout << maxPossibleTeams << endl;

	for (int i = 1; i <= maxPossibleTeams; i++)
	{
		itr = m.find(1);
		cout << itr->second << " ";
		m.erase(itr);

		itr = m.find(2);
		cout << itr->second << " ";
		m.erase(itr);

		itr = m.find(3);
		cout << itr->second << "\n";
		m.erase(itr);
	}

	return 0;
}