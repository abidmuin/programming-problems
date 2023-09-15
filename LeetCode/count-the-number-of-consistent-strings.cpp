// https://leetcode.com/problems/count-the-number-of-consistent-strings/

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