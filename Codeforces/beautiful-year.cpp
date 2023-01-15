// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int givenYear = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0; // n1=first digit(from leftside)

	cin >> givenYear;

	while (true)
	{
		givenYear++;

		n1 = givenYear / 1000;
		n2 = (givenYear / 100) % 10;
		n3 = (givenYear / 10) % 10;
		n4 = givenYear % 10;

		if ((n1 != n2 && n1 != n3 && n1 != n4) && (n2 != n3 && n2 != n4) && (n3 != n4))
		{
			break;
		}
	}

	cout << givenYear << endl;

	return 0;
}