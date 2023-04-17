// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution
{
public:
	vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
	{
		vector<bool> result;
		int maxValue = -1;

		for (int i = 0; i < candies.size(); i++)
		{
			maxValue = max(maxValue, candies[i]);
		}

		for (int i = 0; i < candies.size(); i++)
		{
			if ((candies[i] + extraCandies) >= maxValue)
			{
				result.push_back(true);
			}
			else
			{
				result.push_back(false);
			}
		}

		cout << maxValue << endl;

		return result;
	}
};