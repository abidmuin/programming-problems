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

	int programming[numberOfChildren], math[numberOfChildren], pe[numberOfChildren];
	int index1 = 0, index2 = 0, index3 = 0, skill = 0;

	for (int i = 0; i < numberOfChildren; i++)
	{
		cin >> skill;

		if (skill == 1)
		{
			programming[index1] = i;
			index1++;
		}
		else if (skill == 2)
		{
			math[index2] = i;
			index2++;
		}
		else
		{
			pe[index3] = i;
			index3++;
		}
	}

	int maxPossibleTeams = min({index1, index2, index3});
	cout << maxPossibleTeams << endl;

	for (int i = 0; i < maxPossibleTeams; i++)
	{
		cout << (programming[i] + 1) << " " << (math[i] + 1) << " " << (pe[i] + 1) << "\n";
	}

	return 0;
}