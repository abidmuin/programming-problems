// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int numberOfDays = 0;
	string str = "";

	char previousChar, currentChar;
	bool isDistracted = false;

	set<char> s;
	set<char>::iterator itr;

	while (testCases--)
	{
		cin >> numberOfDays;
		cin >> str;

		currentChar = str[0];
		s.insert(currentChar);

		for (int i = 1; i < numberOfDays; i++)
		{
			previousChar = currentChar;
			currentChar = str[i];

			if (currentChar != previousChar)
			{
				itr = s.find(currentChar);

				if (itr != s.end())
				{
					isDistracted = true;
				}
				else
				{
					s.insert(currentChar);
				}
			}
		}

		if (isDistracted)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
		cout << "\n";

		s.clear();
		previousChar = '\0';
		currentChar = '\0';
		isDistracted = false;
	}

	return 0;
}
