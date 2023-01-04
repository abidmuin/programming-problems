// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int limak = 0;
	int bob = 0;
	int year = 0;

	cin >> limak >> bob;

	while (limak <= bob)
	{
		limak = limak * 3;
		bob = bob * 2;
		year++;
	}
	cout << year << endl;

	return 0;
}
