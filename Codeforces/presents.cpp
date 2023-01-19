// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int totalFriends = 0;
	cin >> totalFriends;

	int friendNumber = 0;
	map<int, int> m;

	for (int i = 1; i <= totalFriends; i++)
	{
		cin >> friendNumber;
		m.insert({friendNumber, i});
	}

	for (auto itr : m)
	{
		cout << itr.second << " ";
	}

	return 0;
}