// https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	map<int, int> m;
	map<int, int>::iterator itr;
	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		itr = m.find(temp);

		if (itr != m.end())
		{
			m[temp]++;
		}
		else
		{
			m.insert({temp, 1});
		}
	}

	int taxis = 0;
	int ones = 0, twos = 0, threes = 0;

	for (auto itr : m)
	{
		if (itr.first == 1)
		{
			ones = itr.second;
		}
		else if (itr.first == 2)
		{
			twos = itr.second;
		}
		else if (itr.first == 3)
		{
			threes = itr.second;
		}
		else
		{
			taxis += itr.second;
		}
	}

	if (threes >= ones)
	{
		taxis += threes;
		ones = 0;
	}
	else
	{
		taxis += threes;
		ones -= threes;
	}

	if (twos > 0)
	{
		taxis += (twos / 2);
		twos = (twos & 1);
	}

	int remainingChilds = ones + (twos * 2);

	if (remainingChilds <= 4 && remainingChilds > 0)
	{
		taxis += 1;
	}
	else if ((remainingChilds % 4) == 0)
	{
		taxis += (remainingChilds / 4);
	}
	else
	{
		taxis += (remainingChilds / 4) + 1;
	}

	cout << taxis << endl;

	return 0;
}