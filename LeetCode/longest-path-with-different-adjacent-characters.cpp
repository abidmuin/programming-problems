// https://leetcode.com/problems/longest-path-with-different-adjacent-characters/

// DFS

class Solution
{
public:
	int dfs(int currentNode, vector<vector<int>> &children, string &s, int &longestPath)
	{
		// Longest and second longest chains starting from currentNode (does not count the
		// currentNode itself).
		int longestChain = 0, secondLongestChain = 0;
		for (int child : children[currentNode])
		{
			// Get the number of nodes in the longest path in the subtree of child,
			// including the child.
			int longestChainStartingFromChild = dfs(child, children, s, longestPath);
			// We won't move to the child if it has the same character as the currentNode.
			if (s[currentNode] == s[child])
			{
				continue;
			}
			// Modify the longestChain and secondLongestChain if longestChainStartingFromChild
			// is bigger.
			if (longestChainStartingFromChild > longestChain)
			{
				secondLongestChain = longestChain;
				longestChain = longestChainStartingFromChild;
			}
			else if (longestChainStartingFromChild > secondLongestChain)
			{
				secondLongestChain = longestChainStartingFromChild;
			}
		}

		// Add "1" for the node itself.
		longestPath = max(longestPath, longestChain + secondLongestChain + 1);
		return longestChain + 1;
	}

	int longestPath(vector<int> &parent, string s)
	{
		int n = parent.size();
		vector<vector<int>> children(n);
		// Start from node 1, since root node 0 does not have a parent.
		for (int i = 1; i < n; i++)
		{
			children[parent[i]].push_back(i);
		}

		int longestPath = 1;
		dfs(0, children, s, longestPath);

		return longestPath;
	}
};

// BFS

class Solution
{
public:
	int longestPath(vector<int> &parent, string s)
	{
		int n = parent.size();
		vector<int> childrenCount(n);
		// Start from 1, since the root node does not have a parent.
		for (int node = 1; node < n; node++)
		{
			childrenCount[parent[node]]++;
		}

		vector<vector<int>> longestChains(n);
		queue<int> q;
		int longestPath = 1;

		for (int node = 0; node < n; node++)
		{
			longestChains[node] = vector<int>(2);
			// Push all leaf nodes in the queue.
			if (childrenCount[node] == 0 && node != 0)
			{
				q.push(node);
				longestChains[node][0] = 1;
			}
		}

		while (!q.empty())
		{
			int currentNode = q.front();
			q.pop();
			int par = parent[currentNode];

			// Get the number of nodes in the longest chain starting from the currentNode,
			// including the currentNode.
			int longestChainStartingFromCurrNode = longestChains[currentNode][0];
			if (s[currentNode] != s[par])
			{
				// Modify the longest chain and second longest chain if
				// longestChainStartingFromCurrNode is bigger.
				int longestChainStartingFromCurrNode = longestChains[currentNode][0];
				if (longestChainStartingFromCurrNode > longestChains[par][0])
				{
					longestChains[par][1] = longestChains[par][0];
					longestChains[par][0] = longestChainStartingFromCurrNode;
				}
				else if (longestChainStartingFromCurrNode > longestChains[par][1])
				{
					longestChains[par][1] = longestChainStartingFromCurrNode;
				}
			}

			longestPath = max(longestPath, longestChains[par][0] + longestChains[par][1] + 1);
			childrenCount[par]--;

			if (childrenCount[par] == 0 && par != 0)
			{
				longestChains[par][0]++;
				q.push(par);
			}
		}

		return longestPath;
	}
};