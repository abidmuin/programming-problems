// https://leetcode.com/problems/merge-strings-alternately/

class Solution
{
public:
	string mergeAlternately(string word1, string word2)
	{
		string result = "";

		int word1Length = word1.size();
		int word2Length = word2.size();
		int strLength = max(word1Length, word2Length);

		for (int i = 0; i < strLength; i++)
		{
			if (i < word1Length)
			{
				result += word1[i];
			}
			if (i < word2Length)
			{
				result += word2[i];
			}
		}

		return result;
	}
};