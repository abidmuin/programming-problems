// https://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> home;
	vector<int> away;
	int homeJersey = 0;
	int awayJersey = 0;
	int result = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> homeJersey >> awayJersey;

		home.push_back(homeJersey);
		away.push_back(awayJersey);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (home[i] == away[j])
			{
				result++;
			}
		}
	}

	cout << result << endl;

	return 0;
}