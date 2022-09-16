// https://leetcode.com/problems/repeated-substring-pattern/

class Solution
{
public:
	int *buildLPS(string str, int stringLength)
	{
		int *LPS = new int[stringLength];

		for (int i = 0; i < stringLength; i++)
		{
			LPS[i] = 0;
		}

		int idx = 0;

		for (int i = 1; i < stringLength; i++)
		{
			if (str[i] == str[idx])
			{
				LPS[i] = idx + 1;
				idx++;
			}
			else if (idx > 0)
			{
				idx = LPS[idx - 1];
				// stay on the same index
				i--;
			}
		}

		return LPS;
	}
	bool repeatedSubstringPattern(string s)
	{
		int stringLength = s.length();
		int *LPS = buildLPS(s, stringLength);
		if (LPS[stringLength - 1] != 0 && (stringLength % (stringLength - LPS[stringLength - 1]) == 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};