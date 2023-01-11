// https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/

class Solution
{
public:
	int dfs(int node, int parent, vector<vector<int>> &adj, vector<bool> &hasApple)
	{
		int minTime = 0;
		int childTime = 0;

		for (auto child : adj[node])
		{
			// avoids infinite loop (child <=> parent)
			if (child == parent)
			{
				continue;
			}

			childTime = dfs(child, node, adj, hasApple);

			if (childTime || hasApple[child])
			{
				minTime += childTime + 2;
			}
		}
		return minTime;
	}
	int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
	{
		vector<vector<int>> adj(n);

		for (auto edge : edges)
		{
			adj[edge[0]].push_back(edge[1]);
			adj[edge[1]].push_back(edge[0]);
		}

		return dfs(0, -1, adj, hasApple);
	}
};