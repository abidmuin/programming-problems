// https://leetcode.com/problems/excel-sheet-column-number/

class Solution
{
public:
	int titleToNumber(string columnTitle)
	{
		int result = 0;
		int temp = 0;

		for (char ch : columnTitle)
		{
			temp = ch - 'A' + 1;
			result = (result * 26) + temp;
		}

		return result;
	}
};