// https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution
{
public:
	int maxIceCream(vector<int> &costs, int coins)
	{
		sort(costs.begin(), costs.end());
		int vecSize = costs.size();
		int iceCreamCount = 0;

		for (int cost : costs)
		{
			if (cost <= coins)
			{
				coins -= cost;
				iceCreamCount++;
			}
		}
		return iceCreamCount;
	}
};