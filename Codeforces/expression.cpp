// https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int result = 0;

	cin >> a >> b >> c;

	result = max(result, (a + b + c));
	result = max(result, (a * b * c));

	result = max(result, (a + (b * c)));
	result = max(result, (a * (b + c)));

	result = max(result, ((a + b) * c));
	result = max(result, ((a * b) + c));

	cout << result << endl;

	return 0;
}