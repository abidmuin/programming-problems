// https://leetcode.com/problems/sqrtx/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int mySqrt(int x)
	{
		if (x == 0)
		{
			return x;
		}

		int lower = 1;
		int upper = x;
		int middle = 0;

		while (lower <= upper)
		{
			middle = lower + ((upper - lower) / 2);

			if (middle == (x / middle))
			{
				return middle;
			}
			else if (middle > (x / middle))
			{
				upper = middle - 1;
			}
			else
			{
				lower = middle + 1;
			}
		}

		return upper;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 8;

	Solution sol;

	cout << sol.mySqrt(x) << endl;

	return 0;
}