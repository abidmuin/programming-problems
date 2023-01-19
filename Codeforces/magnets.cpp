// https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int magnets = 0;
	cin >> magnets;

	int groupCount = 1;
	int currentPole = -1;
	int tempPole = -1;
	string magnetPosition = "";

	while (true)
	{
		cin >> magnetPosition;

		currentPole = magnetPosition[1];
		break;
	}

	for (int i = 1; i < magnets; i++)
	{
		cin >> magnetPosition;

		tempPole = magnetPosition[1];

		if (tempPole != currentPole)
		{
			groupCount++;
			currentPole = tempPole;
		}
	}

	cout << groupCount << endl;

	return 0;
}