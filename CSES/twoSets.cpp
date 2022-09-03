// https://cses.fi/problemset/task/1092

// REFERENCE - https://www.youtube.com/watch?v=bTMyqDH6cUA

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll int n = 0, sum = 0, mid = 0;
	cin >> n;
	sum = (n * (n + 1)) / 2;

	if (sum % 2 == 0)
	{
		cout << "YES" << endl;
		mid = sum / 2;
		vector<int> v1, v2;
		vector<int>::iterator it;
		for (ll int i = n; i > 0; i--)
		{
			if (i <= mid)
			{
				v1.push_back(i);
				mid -= i;
			}
			else
			{
				v2.push_back(i);
			}
		}
		cout << v1.size() << endl;
		for (it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
		cout << v2.size() << endl;
		for (it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}