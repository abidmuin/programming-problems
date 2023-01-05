// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int number = 0;
	int steps = 0;
	cin >> number >> steps;

	while (steps--)
	{
		if (number % 10 != 0)
		{
			number--;
		}
		else
		{
			number /= 10;
		}
	}

	cout << number << endl;

	return 0;
}