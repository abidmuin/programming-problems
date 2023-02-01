// https://leetcode.com/problems/fibonacci-number/

// Recursive Approach

class Solution
{
public:
	int fib(int n)
	{
		if (n < 2)
		{
			return n;
		}

		return fib(n - 1) + fib(n - 2);
	}
};

// Iterative Approach

class Solution
{
public:
	int fib(int n)
	{
		if (n < 2)
		{
			return n;
		}

		int f0 = 0;
		int f1 = 1;
		int f = f0 + f1;

		while (n > 1)
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;

			n--;
		}

		return f1;
	}
};