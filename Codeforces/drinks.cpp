// https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int orangeJuices = 3;
	cin >> orangeJuices;

	double fractionSum = 0.0;
	int temp = 0;
	for (int i = 0; i < orangeJuices; i++)
	{
		cin >> temp;
		fractionSum += temp;
	}

	cout << (fractionSum / orangeJuices) << endl;

	return 0;
}