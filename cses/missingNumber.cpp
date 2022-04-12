// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n = 0, sum=0, temp=0;
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		cin >> temp;
		sum += temp;
	}

	cout << (n*(n+1)/2) - sum << endl;	

	return 0;
}