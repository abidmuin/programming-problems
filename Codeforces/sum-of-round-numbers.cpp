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
	int multiplier = 1;
	vector<int> v;

	while (testCases--)
	{
		cin >> number;

		while (number != 0)
		{
			remainder = number % 10;

			if (remainder != 0)
			{
				v.push_back(remainder * multiplier);
			}

			number /= 10;
			multiplier *= 10;
		}

		cout << v.size() << "\n";

		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << "\n";

		v.clear();
		multiplier = 1;
	}

	return 0;
}