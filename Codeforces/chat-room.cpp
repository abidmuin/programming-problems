// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int counter = 0;

	for (auto ch : str)
	{
		if (ch == 'h' && counter == 0)
		{
			counter++;
		}
		else if (ch == 'e' && counter == 1)
		{
			counter++;
		}
		else if (ch == 'l' && counter == 2)
		{
			counter++;
		}
		else if (ch == 'l' && counter == 3)
		{
			counter++;
		}
		else if (ch == 'o' && counter == 4)
		{
			counter++;
		}
	}

	if (counter == 5)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}