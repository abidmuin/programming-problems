// https://leetcode.com/problems/climbing-stairs/

// Fibonacci, Graph, DFS, DP

class Solution
{
public:
	int climbStairs(int n)
	{
		int x = 1, y = 1, temp = 0;
		for (int i = 1; i < n; i++)
		{
			temp = x;
			x += y;
			y = temp;
		}
		return x;
	}
};