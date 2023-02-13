// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> v(n);
	int temp = 0;

	int maxHeight = 0;
	int maxHeightIndex = 0;

	int minHeight = 101;
	int minHeightIndex = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);

		if (temp > maxHeight)
		{
			maxHeight = temp;
			maxHeightIndex = i;
		}

		if (temp <= minHeight)
		{
			minHeight = temp;
			minHeightIndex = i;
		}
	}

	// cout << maxHeight << " " << maxHeightIndex << endl;
	// cout << minHeight << " " << minHeightIndex << endl;

	int minHeightTime = 0;
	int maxHeightTime = 0;

	minHeightTime = n - minHeightIndex - 1;
	maxHeightTime = maxHeightIndex - 0;

	// cout << minHeightTime << " " << maxHeightTime << endl;

	if (maxHeightIndex > minHeightIndex)
	{
		cout << (minHeightTime + maxHeightTime - 1) << endl;
	}
	else
	{
		cout << (minHeightTime + maxHeightTime) << endl;
	}

	return 0;
}