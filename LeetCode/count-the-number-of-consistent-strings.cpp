// https://leetcode.com/problems/count-the-number-of-consistent-strings/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	int countConsistentStrings(string allowed, vector<string> &words)
	{
		int result = 0;
		bool isAllowed = true;

		unordered_set<char> allowedChars;
		unordered_set<char>::iterator itr;

		for (auto &&ch : allowed)
		{
			itr = allowedChars.find(ch);

			if (itr == allowedChars.end())
			{
				allowedChars.insert(ch);
			}
		}

		for (auto &&word : words)
		{
			for (auto &&ch : word)
			{
				itr = allowedChars.find(ch);

				if (itr == allowedChars.end())
				{
					isAllowed = false;
				}
			}

			if (isAllowed)
			{
				result++;
			}

			isAllowed = true;
		}

		return result;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string allowed = "ab";
	vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};

	Solution sol;
	cout << sol.countConsistentStrings(allowed, words) << endl;

	return 0;
}