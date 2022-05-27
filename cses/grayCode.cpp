// https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>

using namespace std;

int generateGrayCode(int);

int main()
{
	int n = 0;
	cin >> n;
	generateGrayCode(n);
	return 0;
}
int generateGrayCode(int n)
{
	if (n < 1)
	{
		cout << "NO SOLUTION" << endl;
	}

	vector<string> v;

	// BASE CASE
	v.assign({"0", "1"});

	for (int i = 2; i < (1 << n); i = (i << 1))
	{
		for (int j = i - 1; j >= 0; j--)
		{
			v.push_back(v[j]);
		}

		for (int j = 0; j < i; j++)
		{
			v[j] = "0" + v[j];
		}

		for (int j = i; j < 2*i; j++)
		{
			v[j] = "1" + v[j];
		}
	}

	for (auto itr : v)
	{
		cout << itr << endl;
	}

	return 0;
}