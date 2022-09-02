// https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0, temp = 0;
	cin >> n;

	set<int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		s.insert(temp);
	}

	cout << s.size() << '\n';

	return 0;
}