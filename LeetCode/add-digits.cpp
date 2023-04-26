// https://leetcode.com/problems/add-digits/


// Intuition: Digit Root => (https://brilliant.org/wiki/digital-root/)
class Solution
{
public:
	int addDigits(int num)
	{
		if (num == 0)
		{
			return 0;
		}
		else if (num % 9 == 0)
		{
			return 9;
		}
		else
		{
			return num % 9;
		}
	}
};

// RECURSION
class Solution
{
public:
	int addDigits(int num)
	{
		int result = 0;

		while (num)
		{
			result += (num % 10);
			num /= 10;
		}

		if (result < 10)
		{
			return result;
		}
		else
		{
			return addDigits(result);
		}
	}
};

// ITERATION
class Solution
{
public:
	int addDigits(int num)
	{
		int tempSum = 0;

		while (num > 9)
		{
			while (num)
			{
				tempSum += (num % 10);
				num /= 10;
			}

			num = tempSum;
			tempSum = 0;
		}

		return num;
	}
};