// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int finalValueAfterOperations(vector<string> &operations)
	{
		int value = 0;

		for (auto &&element : operations)
		{
			for (auto &&ch : element)
			{
				if (ch == '+')
				{
					value++;
					break;
				}
				else if (ch == '-')
				{
					value--;
					break;
				}
			}
		}

		return value;
	}
};

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<string> operations = {"++X", "++X", "X++"};

	Solution sol;
	cout << sol.finalValueAfterOperations(operations) << endl;

	return 0;
}