// https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/

// DFS

class Solution
{
public:
	vector<int> dfs(int node, int parent, vector<vector<int>> &adj, string &labels,
					vector<int> &ans)
	{
		// Store count of all alphabets in the subtree of the node.
		vector<int> nodeCounts(26);
		nodeCounts[labels[node] - 'a'] = 1;

		for (auto &child : adj[node])
		{
			if (child == parent)
			{
				continue;
			}
			vector<int> childCounts = dfs(child, node, adj, labels, ans);
			// Add frequencies of the child node in the parent node's frequency array.
			for (int i = 0; i < 26; i++)
			{
				nodeCounts[i] += childCounts[i];
			}
		}

		ans[node] = nodeCounts[labels[node] - 'a'];
		return nodeCounts;
	}

	vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
	{
		vector<vector<int>> adj(n);
		for (auto &edge : edges)
		{
			adj[edge[0]].push_back(edge[1]);
			adj[edge[1]].push_back(edge[0]);
		}

		vector<int> ans(n, 0);
		dfs(0, -1, adj, labels, ans);

		return ans;
	}
};

// BFS

class Solution
{
public:
	vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
	{
		unordered_map<int, unordered_set<int>> adj;
		for (auto &edge : edges)
		{
			adj[edge[0]].insert(edge[1]);
			adj[edge[1]].insert(edge[0]);
		}

		// Store count of all alphabets of subtree of each node.
		vector<vector<int>> counts(n, vector<int>(26));
		queue<int> q;

		for (int node = 0; node < n; ++node)
		{
			counts[node][labels[node] - 'a'] = 1;
			// Store all leaf nodes in the queue.
			if (node != 0 && adj[node].size() == 1)
			{
				q.push(node);
			}
		}

		while (q.size())
		{
			int curr = q.front();
			q.pop();

			// Each node will have only one element which will be its parent.
			int parent = *adj[curr].begin();
			// Remove current node from adjency list of parent node
			// so current node is not traversed again by parent node.
			// (due to this step, we remove all child nodes from a parent, at end parent node will only have its parent in adjacency list)
			adj[parent].erase(curr);

			// Add counts of current node in parent's frequency array.
			for (int i = 0; i < 26; ++i)
			{
				counts[parent][i] += counts[curr][i];
			}

			// If parent adj size is 1, it has only it's parent in the adjacency list so,
			// it means current node is last child of parent so we insert it in queue now.
			if (parent != 0 && adj[parent].size() == 1)
			{
				q.push(parent);
			}
		}

		vector<int> ans(n);
		for (int node = 0; node < n; ++node)
		{
			ans[node] = counts[node][labels[node] - 'a'];
		}

		return ans;
	}
};