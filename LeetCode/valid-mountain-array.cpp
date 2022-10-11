// https://leetcode.com/problems/valid-mountain-array/

class Solution
{
public:
	bool validMountainArray(vector<int> &arr)
	{
		int arraySize = arr.size();

		if (arraySize < 3)
		{
			return false;
		}

		int peakLeft = 0;
		int peakRight = 0;

		// ASCENDING
		for (int i = 0; i < arraySize; i++)
		{
			if ((arr[i] == arr[i + 1]) && ((i + 1) != arraySize))
			{
				return false;
			}

			if ((arr[i] > arr[i + 1]) && ((i + 1) != arraySize))
			{
				peakLeft = i;
				break;
			}
		}

		// Check if it is continuous ascending
		if (peakLeft == 0)
		{
			return false;
		}

		// DESCENDING
		for (int i = arraySize - 1; i >= 0; i--)
		{
			if ((arr[i] == arr[i - 1]) && ((i - 1) >= 0))
			{
				return false;
			}

			else if ((arr[i] > arr[i - 1]) && ((i - 1) >= 0))
			{
				peakRight = i;
				break;
			}
		}
		// Check if it is continuous descending
		if (peakRight == 0)
		{
			return false;
		}

		// Check if both peak value are at the same index i.e only one peak
		if (peakLeft == peakRight)
		{

			return true;
		}
		else
		{
			return false;
		}
	}
};