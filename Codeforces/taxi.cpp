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

	if (((ones + threes) & 1) == 0)
	{
		taxis += (ones + threes) / 2;
	}
	else if (threes > ones)
	{
		taxis += ((ones + threes) / 2) + 1;
	}
	else
	{
		
	}

	cout << taxis << endl;

	return 0;
}