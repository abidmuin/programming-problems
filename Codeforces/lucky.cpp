// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	string str;
	vector<string> input;
	vector<string> output;

	for (int i = 0; i < testCases; i++)
	{
		cin >> str;
		input.push_back(str);
	}

	for (int i = 0; i < testCases; i++)
	{
		int leftSum = 0;
		int rightSum = 0;

		leftSum = (int)input[i][0] + (int)input[i][1] + (int)input[i][2];
		rightSum = (int)input[i][3] + (int)input[i][4] + (int)input[i][5];

		if (leftSum == rightSum)
		{
			output.push_back("YES");
		}
		else
		{
			output.push_back("NO");
		}
	}

	for (auto &&itr : output)
	{
		cout << itr << endl;
	}

	return 0;
}