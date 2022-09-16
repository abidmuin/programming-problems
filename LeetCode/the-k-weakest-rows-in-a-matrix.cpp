// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution
{
public:
	class compare
	{
	public:
		bool operator()(pair<int, int> &a, pair<int, int> &b)
		{
			if (a.first == b.first)
			{
				return a.second < b.second;
			}
			else
			{
				return a < b;
			}
		}
	};

	int binarySearch(vector<int> v)
	{
		int low = 0;
		int high = v.size() - 1;
		int mid = 0;

		while (low <= high)
		{
			mid = (low + high) / 2;
			if (v[mid] == 1)
			{
				low++;
			}
			else
			{
				high--;
			}
		}
		return low;
	}

	vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
	{
		vector<int> result;
		vector<pair<int, int>> v;
		pair<int, int> tempPair;
		int soldiersCount = 0;

		for (int i = 0; i < mat.size(); i++)
		{
			soldiersCount = binarySearch(mat[i]);
			tempPair.first = soldiersCount;
			tempPair.second = i;

			v.push_back(tempPair);
		}

		sort(v.begin(), v.end(), compare());

		for (int i = 0; i < k; i++)
		{
			result.push_back(v[i].second);
		}
		return result;
	}
};