// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int coins = 0;
	cin >> coins;

	vector<int> v;
	int temp = 0;
	int totalSum = 0;

	while (coins--)
	{
		cin >> temp;
		totalSum += temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), greater<int>{});

	int vecSize = v.size();
	int myCoinsValue = v[0];
	int minCoins = 1;

	for (int i = 1; i < vecSize; i++)
	{
		if ((totalSum - myCoinsValue) >= myCoinsValue)
		{
			myCoinsValue += v[i];
			minCoins++;
		}
	}

	cout << minCoins << endl;

	return 0;
}