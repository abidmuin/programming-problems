// https://leetcode.com/problems/is-subsequence/

// Two Pointers

class Solution
{
public:
	bool isSubsequence(string s, string t)
	{
		int str1Size = s.size();
		int str2Size = t.size();

		if (str1Size == 0)
		{
			return true;
		}

		int ptr1 = 0;
		int ptr2 = 0;

		while ((ptr1 < str1Size) && (ptr2 < str2Size))
		{
			if (s[ptr1] == t[ptr2])
			{
				ptr1++;
				ptr2++;
			}
			else
			{
				ptr2++;
			}

			if (ptr1 == str1Size)
			{
				return true;
			}
		}

		return false;
	}
};