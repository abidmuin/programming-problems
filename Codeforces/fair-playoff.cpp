// https://codeforces.com/problemset/problem/1535/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int players = 4;
	vector<int> v(players);
	vector<int> sortedVec(players);

	int num1 = 0;
	int num2 = 0;

	for (int i = 0; i < testCases; i++)
	{
		cin >> v[0] >> v[1] >> v[2] >> v[3];
		// cout << v[0] << v[1] << v[2] << v[3];

		 sort(v.begin(), v.end(), greater<int>());
		num1 = v[0];
		num2 = v[1];

		cout << num1 << " " << num2 << endl;
	}

	return 0;
}