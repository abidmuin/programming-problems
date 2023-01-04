// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

class Solution
{
public:
	int minimumRounds(vector<int> &tasks)
	{
		int taskLength = tasks.size();
		if (taskLength < 2)
		{
			return -1;
		}

		map<int, int> m;
		map<int, int>::iterator itr;

		for (int i = 0; i < taskLength; i++)
		{
			itr = m.find(tasks[i]);
			if (itr != m.end())
			{
				itr->second++;
			}
			else
			{
				m.insert({tasks[i], 1});
			}
		}

		int minimumRounds = 0;
		for (itr = m.begin(); itr != m.end(); itr++)
		{
			if (itr->second < 2)
			{
				return -1;
			}
			else
			{
				minimumRounds += ((itr->second + 2) / 3);
			}
		}
		return minimumRounds;
	}
};