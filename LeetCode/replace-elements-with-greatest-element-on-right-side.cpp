// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

/*
Optimal Solution

Time Complexity => O(N)
Space Complexity => O(1)
*/

class Solution
{
public:
	vector<int> replaceElements(vector<int> &arr)
	{
		int vecSize = arr.size();
		int currentMax = arr[vecSize - 1];
		int temp = 0;

		for (int i = (vecSize - 2); i >= 0; i--)
		{
			temp = currentMax;
			if (arr[i] > currentMax)
			{
				currentMax = arr[i];
			}
			arr[i] = temp;
		}
		arr[vecSize - 1] = -1;

		return arr;
	}
};