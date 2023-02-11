// https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	int p = 0;
	int q = 0;
	int temp = 0;

	unordered_set<int> s;

	cin >> n;

	cin >> p;
	while (p--)
	{
		cin >> temp;
		s.insert(temp);
	}

	cin >> q;
	while (q--)
	{
		cin >> temp;
		s.insert(temp);
	}

	bool canPass = false;

	for (int i = 1; i <= n; i++)
	{
		canPass = s.find(i) != s.end();
		if (!canPass)
		{
			break;
		}
	}

	if (canPass)
	{
		cout << "I become the guy." << endl;
	}
	else
	{
		cout << "Oh, my keyboard!" << endl;
	}

	return 0;
}