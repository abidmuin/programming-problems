// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>

using namespace std;

// USING EXTRA SPACE
int main()
{
	int n = 0;
	int k = 0;

	cin >> n >> k;

	int *scores = new int[n];
	int tempScore = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> tempScore;
		scores[i] = tempScore;
	}

	int minScoreToAdvance = scores[k - 1];
	for (int i = 0; i < n; i++)
	{
		if (scores[i] < minScoreToAdvance || scores[i] == 0)
		{
			cout << i << endl;
			break;
		}
		else if (i == n - 1)
		{
			cout << (i + 1) << endl;
			break;
		}
	}

	return 0;
}

// WITHOUT USING EXTRA SPACE
int main()
{
	int n = 0;
	int k = 0;

	cin >> n >> k;

	int minScoreToAdvance = 0;
	int score = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> score;

		if ((i == 0) && (score == 0))
		{
			cout << score << endl;
			break;
		}
		else if ((i < k) && (score == 0))
		{
			cout << i << endl;
			break;
		}
		else if ((i < k) && (score != 0))
		{
			minScoreToAdvance = score;
		}

		if ((i >= k) && (score < minScoreToAdvance))
		{
			cout << i << endl;
			break;
		}
		else if (i == n - 1)
		{
			cout << n << endl;
		}
	}

	return 0;
}