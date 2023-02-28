// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfRequests = 0;
	cin >> numberOfRequests;

	string name;
	map<string, int> m; // string=name, int=suffix number
	map<string, int>::iterator itr;

	while (numberOfRequests--)
	{
		cin >> name;
		itr = m.find(name);

		if (itr != m.end())
		{
			cout << name << ++itr->second << "\n";
		}
		else
		{
			cout << "OK" << "\n";
			m.insert({name, 0});
		}
	}

	return 0;
}