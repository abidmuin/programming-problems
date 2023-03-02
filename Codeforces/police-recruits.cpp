// https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfEvents = 0;
	cin >> numberOfEvents;

	int recruits = 0;
	int untreatedCrimes = 0;
	int currentEvent = 0;

	while (numberOfEvents--)
	{
		cin >> currentEvent;

		if (currentEvent == -1)
		{
			if (recruits > 0)
			{
				recruits--;
			}
			else
			{
				untreatedCrimes++;
			}
		}
		else if (currentEvent <= 10)
		{
			recruits += currentEvent;
		}
	}

	cout << untreatedCrimes << endl;

	return 0;
}