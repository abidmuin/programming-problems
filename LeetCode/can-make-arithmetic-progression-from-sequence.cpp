// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

class Solution
{
public:
	bool canMakeArithmeticProgression(vector<int> &arr)
	{
		sort(arr.begin(), arr.end(), greater<int>());
		int difference = (arr[0] - arr[1]);

		for (int i = 2; i < arr.size(); i++)
		{
			if ((arr[i - 1] - arr[i]) != difference)
			{
				return false;
			}
		}

		return true;
	}
};