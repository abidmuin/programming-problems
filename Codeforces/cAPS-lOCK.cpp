// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int stringSize = str.size();
	int upperCaseCount = 0;

	if (stringSize == 1)
	{
		if (isupper(str[0]))
		{
			str = tolower(str[0]);
		}
		else
		{
			str = toupper(str[0]);
		}
	}
	else
	{
		for (int i = 0; i < stringSize; i++)
		{
			if (isupper(str[i]))
			{
				upperCaseCount++;
			}
		}

		if (upperCaseCount == stringSize)
		{
			for (int i = 0; i < stringSize; i++)
			{
				str[i] = tolower(str[i]);
			}
		}
		else if ((islower(str[0])) &&
				 (upperCaseCount == stringSize - 1))
		{
			str[0] = toupper(str[0]);

			for (int i = 1; i < stringSize; i++)
			{
				str[i] = tolower(str[i]);
			}
		}
	}

	cout << str << endl;

	return 0;
}