// https://codeforces.com/problemset/problem/1367/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	string originalString = "";
	string modifiedString = "";
	int sizeOfModifiedString = 0;

	while (testCases--)
	{
		cin >> modifiedString;

		sizeOfModifiedString = modifiedString.size();

		if (sizeOfModifiedString < 4)
		{
			originalString = modifiedString;
		}
		else
		{
			originalString += modifiedString[0];

			for (int i = 1; i < (sizeOfModifiedString - 1); i += 2)
			{
				originalString += modifiedString[i];
			}

			originalString += modifiedString[sizeOfModifiedString - 1];
		}

		cout << originalString << "\n";
		originalString = "";
	}

	return 0;
}