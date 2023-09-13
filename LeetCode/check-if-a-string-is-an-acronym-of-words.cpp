// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/

class Solution
{
public:
	bool isAcronym(vector<string> &words, string s)
	{
		string resultStr = "";

		for (auto &&word : words)
		{
			resultStr += word.front();
		}

		cout << resultStr << endl;

		return (s == resultStr);
	}
};