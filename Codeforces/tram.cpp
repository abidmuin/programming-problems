// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int in = 0;
	int out = 0;
	int tramStops = 0;
	int remainingPassenger = 0;
	int requiredCapacity = 0;

	cin >> tramStops;

	while (tramStops--)
	{
		cin >> out >> in;

		remainingPassenger += in - out;

		if (requiredCapacity < remainingPassenger)
		{
			requiredCapacity = remainingPassenger;
		}
	}

	cout << requiredCapacity << endl;

	return 0;
}