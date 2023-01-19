// https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int rooms = 0;
	cin >> rooms;

	int peoplesPresent = -1;
	int roomCapacity = -1;
	int roomCount = 0;

	while (rooms--)
	{
		cin >> peoplesPresent >> roomCapacity;

		if ((roomCapacity - peoplesPresent) >= 2)
		{
			roomCount++;
		}
	}

	cout << roomCount << endl;

	return 0;
}