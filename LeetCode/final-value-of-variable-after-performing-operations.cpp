// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution
{
public:
	int finalValueAfterOperations(vector<string> &operations)
	{
		int value = 0;

		for (auto &&element : operations)
		{
			if (element[1] == '+')
			{
				value++;
			}
			else if (element[1] == '-')
			{
				value--;
			}
		}

		return value;
	}
};