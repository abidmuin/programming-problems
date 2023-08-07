// https://codeforces.com/problemset/problem/1791/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	set<char> s;
	set<char>::iterator itr;

	s.insert({'c', 'o', 'd', 'e', 'f', 'r', 's'});
	char ch;

	while (testCases--)
	{
		cin >> ch;
		itr = s.find(ch);
		
		if (itr != s.end())
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}