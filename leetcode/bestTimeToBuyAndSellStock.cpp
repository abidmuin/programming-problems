// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		int buy = prices[0], sell = 0, maxProfit = 0;

		if (prices.size() == 1 || maxProfit < 0)
		{
			return 0;
		}

		for (int i = 1; i < prices.size(); i++)
		{
			if (prices[i] < buy & i < prices.size() - 1)
			{
				buy = prices[i];
				sell = 0;
			}
			else if (prices[i] > sell)
			{
				sell = prices[i];
			}
			if (maxProfit < (sell - buy))
			{
				maxProfit = sell - buy;
			}
		}

		return maxProfit < 0 ? 0 : maxProfit;
	}
};