// https://leetcode.com/problems/add-binary/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	string addBinary(string a, string b)
	{
		string result = "";
		int carry = 0;
		int stringSize = max(a.size(), b.size());
		string::iterator itr;
		itr = result.begin();

		for (int i = stringSize - 1; i >= 0; i--)
		{
			if ((a[i] == 1) && (b[i] == 1))
			{
				if (carry == 1)
				{
					result.insert(itr, '1');
					carry = 1;
				}
				else
				{
					result.insert(itr, '0');
					carry = 1;
				}
				cout << result << endl;
			}
			else if ((a[i] == 0) && (b[i] == 0))
			{
				if (carry == 1)
				{
					result.insert(itr, '1');
					carry = 0;
				}
				cout << result << endl;
			}
			else
			{
				if (carry == 1)
				{
					result.insert(itr, '0');
					carry = 1;
				}
				else
				{
					result.insert(itr, '1');
					carry = 0;
				}
				cout << result << endl;
			}
		}

		if (carry == 1)
		{
			result.insert(itr, '1');
			carry = 0;
		}

		return result;
	}
};

int main()
{
	Solution sol;

	string x = "1010";
	string y = "1011";

	cout << sol.addBinary(x, y) << endl;

	return 0;
}