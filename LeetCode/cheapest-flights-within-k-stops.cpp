// https://leetcode.com/problems/cheapest-flights-within-k-stops/

// BFS

class Solution
{
public:
	int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
	{
		vector<vector<pair<int, int>>> adj(n);
		for (auto &e : flights)
		{
			adj[e[0]].push_back({e[1], e[2]});
		}
		vector<int> dist(n, numeric_limits<int>::max());
		queue<pair<int, int>> q;
		q.push({src, 0});
		int stops = 0;

		while (stops <= k && !q.empty())
		{
			int sz = q.size();
			// Iterate on current level.
			while (sz--)
			{
				auto [node, distance] = q.front();
				q.pop();
				// Iterate over neighbors of popped node.
				for (auto &[neighbour, price] : adj[node])
				{
					if (price + distance >= dist[neighbour])
						continue;
					dist[neighbour] = price + distance;
					q.push({neighbour, dist[neighbour]});
				}
			}
			stops++;
		}
		return dist[dst] == numeric_limits<int>::max() ? -1 : dist[dst];
	}
};

// Bellman Ford

class Solution
{
public:
	int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
	{
		// Distance from source to all other nodes.
		vector<int> dist(n, numeric_limits<int>::max());
		dist[src] = 0;

		// Run only K+1 times since we want shortest distance in K hops.
		for (int i = 0; i <= k; i++)
		{
			// Create a copy of dist vector.
			vector<int> temp(dist);
			for (auto &flight : flights)
			{
				if (dist[flight[0]] != numeric_limits<int>::max())
				{
					temp[flight[1]] = min(temp[flight[1]], dist[flight[0]] + flight[2]);
				}
			}
			// Copy the temp vector into dist.
			dist = temp;
		}
		return dist[dst] == numeric_limits<int>::max() ? -1 : dist[dst];
	}
};

// Dijkstra

class Solution
{
public:
	int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
	{
		vector<vector<pair<int, int>>> adj(n);
		for (auto e : flights)
		{
			adj[e[0]].push_back({e[1], e[2]});
		}
		vector<int> stops(n, numeric_limits<int>::max());
		priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
		// {dist_from_src_node, node, number_of_stops_from_src_node}
		pq.push({0, src, 0});

		while (!pq.empty())
		{
			auto temp = pq.top();
			pq.pop();
			int dist = temp[0];
			int node = temp[1];
			int steps = temp[2];
			// We have already encountered a path with a lower cost and fewer stops,
			// or the number of stops exceeds the limit.
			if (steps > stops[node] || steps > k + 1)
				continue;
			stops[node] = steps;
			if (node == dst)
				return dist;
			for (auto &[neighbor, price] : adj[node])
			{
				pq.push({dist + price, neighbor, steps + 1});
			}
		}
		return -1;
	}
};