// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int stringSize = str.size();
	bool found = false;
	string result;

	for (int i = 0; i < stringSize; i++)
	{
		if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
		{
			if ((i != 0) && (result.back() != ' '))
			{
				result += " ";
			}

			i += 2;
		}
		else
		{
			result += str[i];
		}
	}

	cout << result << endl;

	return 0;
}