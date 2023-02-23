// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	set<char> s;

	getline(cin, str);

	for (auto ch : str)
	{
		if (isalpha(ch))
		{
			s.emplace(ch);
		}
	}

	cout << s.size() << endl;

	return 0;
}