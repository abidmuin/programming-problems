// https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int students = 0, timesOfParticipation = 0;
	cin >> students >> timesOfParticipation;

	vector<int> v(students);

	for (int i = 0; i < students; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int maxTeams = 0;

	for (int i = 2; i < students; i += 3)
	{
		if ((v[i] + timesOfParticipation) <= 5)
		{
			maxTeams++;
		}
	}

	cout << maxTeams << endl;

	return 0;
}