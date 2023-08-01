// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>

using namespace std;

int calculateCalories(vector<int> &a, string &s)
{
	int totalCalories = 0;
	int stripNumber = 0;

	for (char i : s)
	{
		stripNumber = i - '0' - 1;
		totalCalories += a[stripNumber];
	}

	cout << endl;

	return totalCalories;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfStrips = 4;
	vector<int> a(numberOfStrips);
	string s;

	for (int i = 0; i < numberOfStrips; i++)
	{
		cin >> a[i];
	}

	cin >> s;

	cout << calculateCalories(a, s) << endl;

	return 0;
}