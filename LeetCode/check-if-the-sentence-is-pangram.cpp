// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution
{
public:
	bool checkIfPangram(string sentence)
	{
		int chArray[26] = {0};
		int chValue = 0;

		for (auto &&ch : sentence)
		{
			chValue = ch - 97;
			chArray[chValue]++;
		}

		for (auto &&arrElement : chArray)
		{
			if (!arrElement)
			{
				return false;
			}
		}

		return true;
	}
};