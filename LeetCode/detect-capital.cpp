// https://leetcode.com/problems/detect-capital/

class Solution
{
public:
	bool detectCapitalUse(string word)
	{
		int wordLength = word.length();

		if (wordLength == 1)
		{
			return true;
		}

		// all lowercase
		if (all_of(word.begin(), word.end(), &::islower))
		{
			return true;
		}
		// all uppercase
		else if (all_of(word.begin(), word.end(), &::isupper))
		{
			return true;
		}
		// only first letter as uppercase and rest is lowercase
		else if (isupper(word[0]) && (all_of(word.begin() + 1, word.end(), &::islower)))
		{
			return true;
		}
		return false;
	}
};