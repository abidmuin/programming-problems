// https://codeforces.com/problemset/problem/1669/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int rating = 0;

	for (int i = 0; i < testCases; i++)
	{
		cin >> rating;

		if (rating < 1400)
		{
			cout << "Division 4" << endl;
		}
		else if ((rating >= 1400) && (rating < 1600))
		{
			cout << "Division 3" << endl;
		}
		else if ((rating >= 1600) && (rating < 1900))
		{
			cout << "Division 2" << endl;
		}
		else
		{
			cout << "Division 1" << endl;
		}
	}

	return 0;
}