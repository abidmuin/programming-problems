// https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num = 0;
	cin >> num;

	if (num & 1)
	{
		cout << (num - 9) << " " << 9 << endl;
	}
	else
	{
		cout << (num - 4) << " " << 4 << endl;
	}

	return 0;
}