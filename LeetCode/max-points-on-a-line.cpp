// https://leetcode.com/problems/max-points-on-a-line/

class Solution
{
public:
	int gcd(int a, int b)
	{
		if (a == 0)
		{
			return b;
		}
		return gcd(b % a, a);
	}
	int maxPoints(vector<vector<int>> &points)
	{
		int n = points.size();

		if (n < 3)
		{
			return n;
		}

		int x1 = 0, x2 = 0;
		int y1 = 0, y2 = 0;
		int dx = 0, dy = 0;
		int gcd_number = 0;
		int max_count = 0;

		for (int i = 0; i < n; i++)
		{
			map<pair<int, int>, int> m;

			for (int j = 0; j < n; j++)
			{
				if (i != j)
				{
					x1 = points[i][0];
					x2 = points[j][0];

					y1 = points[i][1];
					y2 = points[j][1];

					dy = y2 - y1;
					dx = x2 - x1;

					gcd_number = gcd(dy, dx);

					m[{dy / gcd_number, dx / gcd_number}]++;
				}
			}
			for (auto itr : m)
			{
				max_count = max(max_count, itr.second);
			}
		}
		return max_count + 1;
	}
};