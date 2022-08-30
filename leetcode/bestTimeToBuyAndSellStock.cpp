// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		int buy = 10001, maxProfit = 0;

		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < buy)
			{
				buy = prices[i];
			}
			else if (prices[i] - buy > maxProfit)
			{
				maxProfit = prices[i] - buy;
			}
		}

		return maxProfit;
	}
};