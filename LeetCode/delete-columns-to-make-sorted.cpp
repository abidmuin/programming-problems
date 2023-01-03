// https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution
{
public:
	int minDeletionSize(vector<string> &strs)
	{
		int colSize = strs[0].size();
		int rowSize = strs.size();
		int deletionSize = 0;

		// Check if sorted or not
		for (int i = 0; i < colSize; i++)
		{
			for (int j = 1; j < rowSize; j++)
			{
				if (strs[j - 1][i] > strs[j][i])
				{
					deletionSize++;
					break;
				}
			}
		}

		return deletionSize;
	}
};