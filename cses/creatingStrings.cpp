// https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>

using namespace std;
set<string> s;

void permutation(string , int, int);

int main()
{
	string str;
	cin >> str;

	int low = 0;
	int high = str.length() - 1;
	
	permutation(str, low, high);

	cout << s.size() << endl;
	for (auto itr = s.begin(); itr != s.end(); itr++)
	{
		cout << *itr << endl;
	}
	
	return 0;
}

void permutation(string str, int low, int high)
{
	if (low == high)
	{
		s.insert(str);
	}
	else
	{
		for (int i = low; i <= high; i++)
		{
			swap(str[low], str[i]);
			permutation(str, low + 1, high);
			swap(str[low], str[i]);
		}
	}
}