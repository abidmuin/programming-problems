// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int tribonacci(int n)
	{
		int memArray[3] = {0, 1, 1};

		if (n < 3)
		{
			return memArray[n];
		}

		int temp = 0;
		for (int i = 3; i <= n; i++)
		{
			temp = memArray[i - 3] + memArray[i - 2] + memArray[i - 1];
			memArray[0] = memArray[1];
			memArray[1] = memArray[2];
			memArray[2] = temp;
		}

		return memArray[2];
	}
};

int main()
{
	Solution sol;
	
	cout << sol.tribonacci(4) << endl;
}