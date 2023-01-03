// https://leetcode.com/problems/delete-columns-to-make-sorted/

#include <bits/stdc++.h>

using namespace std;

int minDeletionSize(vector<string> &strs)
{
	int colSize = strs[0].size();
	int rowSize = strs.size();
	string array[rowSize][colSize];
	int deletionSize = 0;

	cout << rowSize << " " << colSize << endl;

	// Populate the array
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			array[i][j] = strs[i][j];
		}
	}

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	// Check if sorted or not
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 1; j < colSize; j++)
		{
			if (array[j - 1][i] > array[j][i])
			{
				deletionSize++;
				break;
			}
		}
	}

	cout << deletionSize << endl;

	return 0;
}

int main()
{
	vector<string> str = {"rrjk", "furt", "guzm"};

	minDeletionSize(str);

	return 0;
}