// https://leetcode.com/problems/duplicate-zeros/

class Solution
{
public:
	void duplicateZeros(vector<int> &arr)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == 0)
			{
				for (int j = arr.size() - 1; j > i; j--)
				{
					arr[j] = arr[j - 1];
				}
				i++;
			}
		}

		for (auto itr = arr.begin(); itr != arr.end(); itr++)
		{
			cout << *itr << " ";
		}
	}
};