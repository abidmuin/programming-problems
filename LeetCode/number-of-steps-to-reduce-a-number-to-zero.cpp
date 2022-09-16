// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution
{
public:
	int numberOfSteps(int num)
	{
		int steps = 0;
		while (num > 0)
		{
			if ((num & 1) == 0)
			{
				num = num >> 1;
				steps++;
			}
			else
			{
				num--;
				steps++;
			}
		}
		return steps;
	}
};