// https://leetcode.com/problems/score-of-a-string/

class Solution
{
public:
	int scoreOfString(string s)
	{
		string inputString = s;

		int result = 0;
		int current_score = 0;

		for (int i = 1; i < inputString.length(); i++)
		{
			current_score = abs(int(inputString[i]) - int(inputString[i - 1]));
			result += current_score;
		}

		return result;
	}
};