// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int redSocks = 0;
	int blueSocks = 0;

	cin >> redSocks >> blueSocks;

	int differentColorPairs = 0;
	int sameColorPairs = 0;

	if (redSocks > blueSocks)
	{
		differentColorPairs = blueSocks;
		redSocks -= blueSocks;

		sameColorPairs = redSocks / 2;
	}
	else if (blueSocks > redSocks)
	{
		differentColorPairs = redSocks;
		blueSocks -= redSocks;
		
		sameColorPairs = blueSocks / 2;
	}
	else
	{
		differentColorPairs = redSocks;
		sameColorPairs = 0;
	}

	cout << differentColorPairs << " " << sameColorPairs << endl;

	return 0;
}