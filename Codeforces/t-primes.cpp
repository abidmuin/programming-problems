// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int num)
{
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	long long int num = 0;
	long long int sqrtOfNum = 0;

	while (n--)
	{
		cin >> num;
		sqrtOfNum = sqrt(num);

		if (isPrime(num) && (sqrtOfNum * sqrtOfNum == n))
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