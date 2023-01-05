// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

class Solution
{
public:
	int findMinArrowShots(vector<vector<int>> &points)
	{
		int vectorSize = points.size();
		if (vectorSize == 1)
		{
			return 1;
		}

		int minArrows = 1;
		int endPoints = points[0][1];

		sort(points.begin(), points.end());

		for (int i = 0; i < vectorSize; i++)
		{
			if (points[i][0] > endPoints)
			{
				minArrows++;
				endPoints = points[i][1];
			}
			else
			{
				endPoints = min(points[i][1], endPoints);
			}
		}

		return minArrows;
	}
};