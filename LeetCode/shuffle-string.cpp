// https://leetcode.com/problems/shuffle-string/

class Solution
{
public:
	string restoreString(string s, vector<int> &indices)
	{
		int stringLength = s.size();
		string result(stringLength, ' ');

		for (int i = 0; i < stringLength; i++)
		{
			result[indices[i]] = s[i];
		}

		return result;
	}
};