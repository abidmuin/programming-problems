// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfChildren = 0;
	int time = 0;

	cin >> numberOfChildren >> time;

	string studentQueue;
	cin >> studentQueue;

	int queueLength = studentQueue.size();

	while (time--)
	{
		for (int i = 0; i < queueLength; i++)
		{
			if ((studentQueue[i] == 'B') && (studentQueue[i + 1] == 'G'))
			{
				swap(studentQueue[i], studentQueue[i + 1]);
				i++;
			}
		}
	}

	cout << studentQueue << endl;

	return 0;
}