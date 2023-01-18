// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>

using namespace std;

bool luckyNumber(int n)
{
	while (n > 0)
	{
		if ((n % 10 != 4) && (n % 10 != 7))
		{
			return false;
		}
		n /= 10;
	}

	return true;
}

bool almostLuckyNumber(int n)
{
	if (luckyNumber(n))
	{
		return true;
	}

	for (int i = 2; i * i <= n; i++)
	{
		if ((n % i == 0) && (luckyNumber(i) || luckyNumber(n / i)))
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int number = 0;
	cin >> number;

	if (almostLuckyNumber(number))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}