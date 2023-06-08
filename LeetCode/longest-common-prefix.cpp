// https://leetcode.com/problems/longest-common-prefix/

class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		string temp = strs[0];
		string result = "";

		if (strs.size() == 1)
		{
			return strs[0];
		}

		for (int i = 1; i < strs.size(); i++)
		{
			result = "";

			for (int j = 0; j < strs[i].size(); j++)
			{
				if (strs[i][j] == temp[j])
				{

					result += strs[i][j];
				}
				else
				{
					break;
				}
			}

			temp = result;
		}

		return result;
	}
};