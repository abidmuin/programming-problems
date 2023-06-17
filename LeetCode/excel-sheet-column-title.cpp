// https://leetcode.com/problems/excel-sheet-column-title/

class Solution
{
public:
	string convertToTitle(int columnNumber)
	{
		string temp = "";
		string result = "";

		while (columnNumber > 0)
		{
			temp = ((columnNumber - 1) % 26) + 'A';
			result = temp + result;
			columnNumber = (columnNumber - 1) / 26;
		}

		return result;
	}
};