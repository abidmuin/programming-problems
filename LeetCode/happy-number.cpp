// https://leetcode.com/problems/happy-number/

class Solution
{
public:
	int nextNumber(int num)
	{
		int nextNum = 0;
		int digit = 0;

		while (num > 0)
		{
			digit = num % 10;
			nextNum += digit * digit;
			num /= 10;
		}

		return nextNum;
	}

	bool isHappy(int n)
	{
		bool isHappy = false;
		set<int> visitedNumber;

		while (visitedNumber.count(n) == 0)
		{
			visitedNumber.insert(n);
			n = nextNumber(n);

			if (n == 1)
			{
				isHappy = true;
				break;
			}
		}

		return isHappy;
	}
};