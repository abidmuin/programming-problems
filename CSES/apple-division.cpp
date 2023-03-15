// https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int apples = 0;
	cin >> apples;

	vector<int> v(apples);

	for (int i = 0; i < apples; i++)
	{
		cin >> v[i];
	}

	for (auto itr : v)
	{
		cout << itr << " ";
	}
	cout << endl;

	// sort(v.begin(), v.end());

	for (auto itr : v)
	{
		cout << itr << " ";
	}
	cout << endl;

	int leftIndex = 0, rightIndex = (apples - 1);
	int leftSum = 0, rightSum = 0;

	while (leftIndex <= rightIndex)
	{
		if (leftSum <= rightSum)
		{
			leftSum += v[leftIndex];
			leftIndex++;
		}
		else
		{
			rightSum += v[rightIndex];
			rightIndex--;
		}

		cout << leftSum << " " << rightSum << endl;
	}

	cout << abs(leftSum - rightSum) << endl;

	return 0;
}

/*
1 2 3 4 7

*/