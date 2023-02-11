// https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n = 0;
	unordered_set<long long int> s;

	for (int i = 0; i < 4; i++)
	{
		cin >> n;

		if (s.find(n) == s.end())
		{
			s.insert(n);
		}
	}

	if (s.size() >= 4)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << (4 - s.size()) << endl;
	}

	return 0;
}