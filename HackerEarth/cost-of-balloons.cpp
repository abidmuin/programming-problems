// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases = 0;
	cin >> testCases;

	while (testCases--)
	{
		int greenCost = 0;
		int purpleCost = 0;

		cin >> greenCost >> purpleCost;

		int participants = 0;
		cin >> participants;

		int firstProblemSolveCount = 0;
		int secondProblemSolveCount = 0;

		int temp1 = 0;
		int temp2 = 0;

		while (participants--)
		{
			cin >> temp1 >> temp2;

			if (temp1)
			{
				firstProblemSolveCount++;
			}
			
			if (temp2)
			{
				secondProblemSolveCount++;
			}
		}

		int price1 = 0;
		int price2 = 0;

		price1 = (firstProblemSolveCount * greenCost) + (secondProblemSolveCount * purpleCost);
		price2 = (firstProblemSolveCount * purpleCost) + (secondProblemSolveCount * greenCost);

		int minCost = (price1 > price2 ? price2 : price1);
		
		cout << minCost << endl;
	}
	return 0;
}