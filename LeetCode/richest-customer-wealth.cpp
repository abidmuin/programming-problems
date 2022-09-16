// https://leetcode.com/problems/richest-customer-wealth/

class Solution
{
public:
	int maximumWealth(vector<vector<int>> &accounts)
	{
		vector<int> wealth;
		int temp = 0;

		for (int i = 0; i < accounts.size(); i++)
		{
			for (int j = 0; j < accounts[i].size(); j++)
			{
				temp += accounts[i][j];
			}
			wealth.push_back(temp);
			temp = 0;
		}

		return *max_element(wealth.begin(), wealth.end());
	}
};