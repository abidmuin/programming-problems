// https://leetcode.com/problems/length-of-last-word/

// Iterate Left to Right

class Solution
{
public:
	int lengthOfLastWord(string s)
	{
		vector<char> v;
		int strLength = s.size();
		int vecSize = v.size();
		int currentMax = 0;

		for (int i = 0; i < strLength; i++)
		{
			if ((s[i] != ' '))
			{
				currentMax = 0;
				v.push_back(s[i]);
			}

			if ((s[i] == ' ') || (i + 1 == strLength))
			{
				vecSize = v.size();
				currentMax = max(currentMax, vecSize);
				v.clear();
			}
		}

		return currentMax;
	}
};

// Iterate Right to Left

class Solution
{
public:
	int lengthOfLastWord(string s)
	{
		vector<char> v;
		int strLength = s.size();
		int currentMax = 0;

		for (int i = strLength - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				currentMax = 0;
				v.push_back(s[i]);
			}

			if ((s[i] == ' ') || (i == 0))
			{
				currentMax = v.size();
				if (currentMax > 0)
				{
					break;
				}
			}
		}

		return currentMax;
	}
};