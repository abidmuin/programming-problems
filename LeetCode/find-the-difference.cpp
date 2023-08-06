// https://leetcode.com/problems/find-the-difference/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	char findTheDifference(string s, string t)
	{
		int stringSize = s.size();
		char result = t[stringSize];

		for (int i = 0; i < stringSize; i++)
		{
			result ^= s[i] ^ t[i];
		}

		return result;
	}
};