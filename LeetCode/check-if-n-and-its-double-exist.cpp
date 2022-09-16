// https://leetcode.com/problems/check-if-n-and-its-double-exist/

class Solution
{
public:
	bool checkIfExist(vector<int> &arr)
	{
		// key = number, value = index
		map<int, int> m;
		map<int, int>::iterator itr;

		for (int i = 0; i < arr.size(); i++)
		{
			if (!(m.find(arr[i]) != m.end()))
			{
				m.insert({arr[i], i});
				itr = m.find(arr[i] * 2);
				if (itr != m.end() && (i != itr->second))
				{
					return true;
				}
				if (arr[i] % 2 == 0)
				{
					itr = m.find(arr[i] / 2);

					if (itr != m.end() && (i != itr->second))
					{
						return true;
					}
				}
			}
			else
			{
				itr = m.find(arr[i] * 2);
				if (itr != m.end() && (i != itr->second))
				{
					return true;
				}
				if (arr[i] % 2 == 0)
				{
					itr = m.find(arr[i] / 2);

					if (itr != m.end() && (i != itr->second))
					{
						return true;
					}
				}
			}
		}
		return false;
	}
};