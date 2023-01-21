// https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int number = 0;
	cin >> number;

	long long int result = 0;

	if (number < 2)
	{
		result = -1;
	}

	long long int oddSum = 0;  // sum of even numbers
	long long int evenSum = 0; // sum of odd numbers

	if ((number & 1) == 0)
	{
		evenSum = (number / 2) * (number / 2 + 1);
		oddSum = (number / 2) * (number / 2);

		result = evenSum - oddSum;
	}
	else
	{
		evenSum = (number / 2) * (number / 2 + 1);
		oddSum = ((number / 2) + 1) * ((number / 2) + 1);

		result = evenSum - oddSum;
	}

	cout << result << endl;

	return 0;
}