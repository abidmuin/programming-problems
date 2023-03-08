// https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int number = 0;
	int remainder = 0;
	int power = 1;

	vector<int> v;
	int vecSize = 0;

	while (testCases--)
	{
		cin >> number;

		while (number != 0)
		{
			remainder = number % 10;

			if (remainder != 0)
			{
				v.push_back(remainder * power);
			}
		}

		for (auto itr : v)
		{
			cout << itr << " ";
		}

		cout << endl;

		minOperations = 0;
		v.clear();
	}

	return 0;
}