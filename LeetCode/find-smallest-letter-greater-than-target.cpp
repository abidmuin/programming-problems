// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution
{
public:
	char nextGreatestLetter(vector<char> &letters, char target)
	{
		char result;
		int vecSize = letters.size();

		for (int i = 0; i < vecSize; i++)
		{
			if ((letters[i] > target) || (target >= letters[vecSize - 1]))
			{
				result = letters[i];
				break;
			}
		}

		return result;
	}
};