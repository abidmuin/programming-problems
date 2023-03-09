// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int unitPrice = 0;
	int changeCoins = 0;

	cin >> unitPrice >> changeCoins;

	int remainder = 0;

	for (int shovels = 1; shovels < 10; shovels++)
	{
		remainder = (unitPrice * shovels) % 10;

		if (remainder == 0 || remainder == changeCoins)
		{
			cout << shovels << "\n";
			break;
		}
	}

	return 0;
}