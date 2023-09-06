// https://leetcode.com/problems/count-items-matching-a-rule/

class Solution
{
public:
	int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
	{
		int ruleKeyIndex = -1;

		if (ruleKey == "type")
		{
			ruleKeyIndex = 0;
		}
		else if (ruleKey == "color")
		{
			ruleKeyIndex = 1;
		}
		else if (ruleKey == "name")
		{
			ruleKeyIndex = 2;
		}

		int result = 0;

		for (auto &&item : items)
		{
			if (item[ruleKeyIndex] == ruleValue)
			{
				result++;
			}
		}

		return result;
	}
};