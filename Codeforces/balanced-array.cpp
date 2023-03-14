// https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCases = 0;
	cin >> testCases;

	int arrLength = 0;
	int temp = 0;

	while (testCases--)
	{
		cin >> arrLength;

		if (arrLength & 3)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES" << "\n";

			int arr[arrLength];

			temp = 2;
			for (int i = 0; i <= arrLength / 2; i++)
			{
				arr[i] = temp;
				temp += 2;
			}

			temp = 1;
			for (int i = arrLength / 2; i < arrLength; i++)
			{
				if ((i + 2) > arrLength)
				{
					arr[i] = temp + (arrLength / 2);
				}
				else
				{
					arr[i] = temp;
					temp += 2;
				}
			}

			for (auto itr : arr)
			{
				cout << itr << " ";
			}
		}

		cout << "\n";
	}

	return 0;
}