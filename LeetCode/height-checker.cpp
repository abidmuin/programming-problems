// https://leetcode.com/problems/height-checker/

class Solution
{
public:
	int heightChecker(vector<int> &heights)
	{
		vector<int> v;
		v = heights;

		sort(v.begin(), v.end());

		int counter = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != heights[i])
			{
				counter++;
			}
		}

		return counter;
	}
};