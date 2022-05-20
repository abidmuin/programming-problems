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
	// for (auto it = m.begin(); it != m.end(); it++)
	// {
	// 	cout << "{" << it->first << ", " << it->second << "}" << endl;
	// }

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
			result += it.first;
		}
	}
	for (int i = tempResult.length() - 1; i >= 0; i--)
	{
		result += tempResult[i];
	}

	cout << result << endl;

	return 0;
}