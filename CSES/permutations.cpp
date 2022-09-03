// https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator it;

	int n = 0;
	cin >> n;

	if (n == 1)
	{
		cout << "1" << endl;
	}
	else if (n <= 3 && n > 1)
	{
		cout << "NO SOLUTION" << endl;
	}
	else
	{
		// ODD NUMBERS
		if (n % 2 != 0)
		{
			for (int i = n - 1; i >= 2; i -= 2)
			{
				cout << i << " ";
			}
			cout << n << " ";
			for (int i = n - 2; i > 0; i -= 2)
			{
				cout << i << " ";
			}
		}
		// EVEN NUMBERS
		else
		{
			for (int i = 2; i <=n; i += 2)
			{
				cout << i << " ";
			}
			for (int i =1; i < n; i += 2)
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}