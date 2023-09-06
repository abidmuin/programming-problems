// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution
{
public:
	int mostWordsFound(vector<string> &sentences)
	{
		int maxCount = 0;
		int tempCount = 0;
		int result = 0;

		for (auto &&sentence : sentences)
		{
			for (auto &&ch : sentence)
			{
				if (ch == ' ')
				{
					tempCount++;
				}
			}

			maxCount = (tempCount > maxCount) ? tempCount : maxCount;
			tempCount = 0;
		}

		result = (maxCount + 1);

		return result;
	}
};