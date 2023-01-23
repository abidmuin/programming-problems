// https://leetcode.com/problems/find-the-town-judge/

class Solution
{
public:
	int findJudge(int n, vector<vector<int>> &trust)
	{

		vector<pair<int, int>> v(n + 1, {0, 0});

		for (int i = 0; i < trust.size(); i++)
		{
			v[trust[i][0]].first++;
			v[trust[i][1]].second++;
		}

		for (int i = 1; i <= n; i++)
		{
			if (v[i].first == 0 && v[i].second == (n - 1))
			{
				return i;
			}
		}

		return -1;
	}
};