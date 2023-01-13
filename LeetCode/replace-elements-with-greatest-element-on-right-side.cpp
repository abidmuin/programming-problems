// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

// Brute Force

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