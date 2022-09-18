// https://codeforces.com/problemset/problem/50/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m = 0;
	int n = 0;

	cin >> m >> n;

	int numberOfDominoes = 0;
	numberOfDominoes = (m * n) >> 1;
	cout << numberOfDominoes << endl;

	return 0;
}
