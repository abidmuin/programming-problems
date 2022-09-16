// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCase = 0;
	cin >> testCase;

	int totalProblems = 3;
	int solutionCount = 0;
	int result = 0;
	int tempValue = 0;

	while (testCase--)
	{
		for (int i = 0; i < totalProblems; i++)
		{
			cin >> tempValue;
			if (tempValue == 1)
			{
				solutionCount++;
			}
		}
		if (solutionCount >= 2)
		{
			result++;
		}
		solutionCount = 0;
	}

	cout << result << endl;

	return 0;
}
