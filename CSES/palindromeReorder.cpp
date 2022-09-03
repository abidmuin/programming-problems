// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int strLength = str.length();

	map<char, int> m;
	map<char, int>::iterator it;
	// MAP FOR CHARACTER FREQUENCY
	for (int i = 0; i < strLength; i++)
	{
		it = m.find(str[i]);
		if (it == m.end())
		{
			m.insert({str[i], 1});
		}
		else
		{
			it->second++;
		}
	}

	int countOdd = 0, countEven = 0;

	for (auto it : m)
	{
		if (it.second % 2 != 0)
		{
			countOdd++;
		}
	}

	if ((strLength % 2 != 0 && countOdd == 1) ||
		(strLength % 2 == 0 && countOdd == 0))
	{
		string result, tempResult;
		for (auto it : m)
		{
			if (it.second % 2 == 0)
			{
				for (int i = 0; i < it.second / 2; i++)
				{
					result += it.first;
				}
			}
		}
		tempResult = result;
		for (auto it : m)
		{
			if (it.second % 2 != 0)
			{
				for (int i = 0; i < it.second; i++)
				{
					result += it.first;
				}
			}
		}
		for (int i = tempResult.length() - 1; i >= 0; i--)
		{
			result += tempResult[i];
		}

		cout << result << endl;
	}
	else
	{
		cout << "NO SOLUTION" << endl;
	}

	return 0;
}