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

	string number;
	string tempNumber;
	vector<string> v;

	int numSize = 0;
	int minOperations = 0;

	while (testCases--)
	{
		cin >> number;

		numSize = number.size();

		for (int i = 0; i < numSize; i++)
		{
			if (number[i] != '0')
			{
				tempNumber += number[i];

				for (int j = i + 1; j < numSize; j++)
				{
					tempNumber += '0';
				}

				v.push_back(tempNumber);
				minOperations++;
				tempNumber = "";
			}
		}

		cout << minOperations << endl;

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