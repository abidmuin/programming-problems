// https://leetcode.com/problems/faulty-keyboard/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	string finalString(string s)
	{
		string result = "";
		string tempSubstring = "";
		int leftPointer = 0;
		int midPointer = 0;
		int rightPointer = 0;
		int stringSize = s.size();
		int counter = 0;

		for (int i = 0; i < stringSize; i++)
		{
			if (s[i] == 'i')
			{
				counter++;
				rightPointer++;
			}
			else
			{
				if (midPointer != rightPointer)
				{
					tempSubstring = s.substr(leftPointer, midPointer);

					if ((counter % 2) != 0)
					{
						reverse(tempSubstring.begin(), tempSubstring.end());
					}

					result += tempSubstring;

					tempSubstring = "";
					counter = 0;
					leftPointer = rightPointer + 1;
					midPointer = rightPointer + 1;
				}
				else
				{
					midPointer++;
					rightPointer++;
				}
			}

			if ((i + 1) == stringSize)
			{
				if (midPointer != rightPointer)
				{
					tempSubstring = s.substr(leftPointer, midPointer);

					if ((counter % 2) != 0)
					{
						reverse(tempSubstring.begin(), tempSubstring.end());
					}

					result += tempSubstring;

					tempSubstring = "";
					counter = 0;
					leftPointer = rightPointer + 1;
					midPointer = rightPointer + 1;
				}
			}
		}

		return result;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s = "string";
	// string s = "poiinter";
	// string s = "qskyviiiii";

	Solution sol;
	cout << sol.finalString(s) << endl;

	return 0;
}