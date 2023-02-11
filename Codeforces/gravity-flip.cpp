// https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> v;
	int temp = 0;

	while (n--)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (auto itr : v)
	{
		cout << itr << " ";
	}

	return 0;
}