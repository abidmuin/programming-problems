// https://leetcode.com/problems/last-stone-weight/

class Solution
{
public:
	int lastStoneWeight(vector<int> &stones)
	{
		priority_queue<int, vector<int>> q;
		int x = 0, y = 0;

		for (auto element : stones)
		{
			q.push(element);
		}

		while (q.size() != 1)
		{
			y = q.top();
			q.pop();

			x = q.top();
			q.pop();

			q.push(y - x);
		}

		return q.top();
	}
};