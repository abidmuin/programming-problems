// https://leetcode.com/problems/n-th-tribonacci-number/

// Approach 1

class Solution
{
public:
	int tribonacci(int n)
	{
		if (n < 2)
		{
			return n;
		}

		int t0 = 0;
		int t1 = 1;
		int t2 = 1;
		int t = t0 + t1 + t2;

		while (n > 2)
		{
			t = t0 + t1 + t2;
			t0 = t1;
			t1 = t2;
			t2 = t;

			n--;
		}

		return t2;
	}
};

// Approach 2

class Solution
{
public:
	int tribonacci(int n)
	{
		int arr[] = {0, 1, 1};

		for (int i = 3; i <= n; i++)
		{
			arr[i % 3] = arr[0] + arr[1] + arr[2];
		}

		return arr[n % 3];
	}
};