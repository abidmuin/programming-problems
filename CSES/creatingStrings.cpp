// https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>

using namespace std;

set<string> allCombinations;

void buildCombination(string str, string res)
{
	int stringLength = str.length();
	string temp;
	
	if (stringLength == 0)
	{
		allCombinations.insert(res);
	}
	else
	{
		for (int i = 0; i < stringLength; i++)
		{
			temp = str;
			buildCombination(temp.erase(i, 1), res + str[i]);
		}
	}
}

int main()
{
	string str;
	cin >> str;

	buildCombination(str, "");

	cout << allCombinations.size() << endl;

	for (auto combination : allCombinations)
	{
		cout << combination << endl;
	}

	return 0;
}
