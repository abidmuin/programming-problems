// https://leetcode.com/problems/truncate-sentence/

class Solution
{
public:
	string truncateSentence(string s, int k)
	{
		int wordCount = 0;
		int stringSize = s.size();
		string result = "";

		for (int i = 0; i < stringSize; i++)
		{
			if (s[i] == ' ')
			{
				wordCount++;
			}

			if (wordCount == k)
			{
				break;
			}

			result += s[i];
		}

		return result;
	}
};