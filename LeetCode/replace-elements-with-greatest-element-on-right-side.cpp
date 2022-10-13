// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution
{
public:
	vector<int> replaceElements(vector<int> &arr)
	{
		int arraySize = arr.size();
		int maxValue = 0;

		for (int i = 0; i < arraySize; i++)
		{
			for (int j = i + 1; j < arraySize; j++)
			{
				maxValue = max(arr[j], maxValue);
			}
			arr[i] = maxValue;
			maxValue = 0;

			if (i == arraySize - 1)
			{
				arr[i] = -1;
			}
		}

		return arr;
	}
};