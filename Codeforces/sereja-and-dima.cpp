// https://codeforces.com/problemset/problem/381/A

<<<<<<< HEAD
=======
/*
Time Complexity =>
Space Complexity =>
*/

>>>>>>> 598a00a74ef04a5fdd97ba9f2a15e76f370fb61e
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

<<<<<<< HEAD
	int cards = 0;
	cin >> cards;

	int arr[cards];

	for (int i = 0; i < cards; i++)
	{
		cin >> arr[i];
	}

	int leftPointer = 0, rightPointer = cards - 1;
	int sereja = 0, dima = 0;
	bool isSereja = true;

	while (leftPointer <= rightPointer)
	{
		if (isSereja)
		{
			if (arr[leftPointer] >= arr[rightPointer])
			{
				sereja += arr[leftPointer];
				leftPointer++;
			}
			else
			{
				sereja += arr[rightPointer];
				rightPointer--;
			}

			isSereja = false;
		}
		else
		{
			if (arr[leftPointer] >= arr[rightPointer])
			{
				dima += arr[leftPointer];
				leftPointer++;
			}
			else
			{
				dima += arr[rightPointer];
				rightPointer--;
			}

			isSereja = true;
		}
	}

	cout << sereja << " " << dima << endl;

=======
>>>>>>> 598a00a74ef04a5fdd97ba9f2a15e76f370fb61e
	return 0;
}