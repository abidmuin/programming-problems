// https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	cin >> str;

	int stringSize = str.size();
	string result;

	for (int i = 0; i < stringSize; i++)
	{
		if (str[i] == '.')
		{
			result += '0';
		}
		else if (str[i] == '-' && str[i + 1] == '.')
		{
			result += '1';
			i++;
		}
		else if (str[i] == '-' && str[i + 1] == '-')
		{
			result += '2';
			i++;
		}
	}

	cout << result << endl;

	return 0;
}