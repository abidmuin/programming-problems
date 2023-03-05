// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int num)
{
	if (num < 2)
	{
		return false;
	}

	if (num < 4)
	{
		return true;
	}

	if (num % 2 == 0 || num % 3 == 0)
	{
		return false;
	}

	for (int i = 5; i * i <= num; i = i + 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int testCases = 0;
	cin >> testCases;

	long long int num = 0;
	long long int sqrtOfNum = 0;

	while (testCases--)
	{
		cin >> num;
		sqrtOfNum = sqrt(num);

		if (isPrime(sqrtOfNum) && (sqrtOfNum * sqrtOfNum == num))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}

		cout << "\n";
	}

	return 0;
}