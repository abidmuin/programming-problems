// https://leetcode.com/problems/add-to-array-form-of-integer/

class Solution
{
public:
	vector<int> addToArrayForm(vector<int> &num, int k)
	{
		int vecSize = num.size();
		for (int i = vecSize - 1; i >= 0; i--)
		{
			num[i] += k;
			k = num[i] / 10;
			num[i] %= 10;
		}
		while (k > 0)
		{
			num.insert(num.begin(), (k % 10));
			k /= 10;
		}
		return num;
	}
};