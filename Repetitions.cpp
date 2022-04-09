// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	char ptr_1 = 'A';
	int tempCount = 0, maxCount = 0;

	for (char ch : str)
	{
		if (ch == ptr_1)
		{
			tempCount++;
			maxCount = max(maxCount, tempCount);
		}
		else
		{
			ptr_1 = ch;
			tempCount = 1;
		}
	}
	cout << maxCount << endl;
	return 0;
}