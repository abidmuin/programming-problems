// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>

using namespace std;

void findPairs(int a, int b, int c, int totalSum)
{
	int pair1 = 0, pair2 = 0, pair3 = 0;

	pair1 = totalSum - a;
	pair2 = totalSum - b;
	pair3 = totalSum - c;

	cout << pair1 << " " << pair2 << " " << pair3 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
	cin >> x1 >> x2 >> x3 >> x4;

	int totalSum = max({x1, x2, x3, x4});

	if (totalSum == x1)
	{
		findPairs(x2, x3, x4, totalSum);
	}
	else if (totalSum == x2)
	{
		findPairs(x1, x3, x4, totalSum);
	}
	else if (totalSum == x3)
	{
		findPairs(x1, x2, x4, totalSum);
	}
	else
	{
		findPairs(x1, x2, x3, totalSum);
	}

	return 0;
}