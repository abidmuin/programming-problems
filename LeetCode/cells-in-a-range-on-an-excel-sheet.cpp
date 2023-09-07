// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/

class Solution
{
public:
	vector<string> cellsInRange(string s)
	{
		int row1 = s[1] - '0';
		int row2 = s[4] - '0';
		int maxRows = max(row1, row2);

		char col1 = s[0];
		char col2 = s[3];
		string cell = "";

		vector<string> result;

		for (char col = col1; col <= col2; col++)
		{
			for (char row = row1; row <= maxRows; row++)
			{
				cell = col + to_string(row);
				result.push_back(cell);
			}
		}

		return result;
	}
};