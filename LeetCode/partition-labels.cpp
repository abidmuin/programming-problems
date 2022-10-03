// https://leetcode.com/problems/partition-labels/

class Solution
{
public:
	vector<int> partitionLabels(string s)
	{
		map<char, int> lastIndex;
		map<char, int>::iterator itr;

		int stringLength = s.size();

		for (int i = 0; i < stringLength; i++)
		{
			itr = lastIndex.find(s[i]);

			if (itr != lastIndex.end())
			{
				itr->second = i;
			}
			else
			{
				lastIndex.insert({s[i], i});
			}
		}

		int tempLastIndex = 0;
		int currentLastIndex = 0;
		int currentSize = 0;
		vector<int> partitionSize;

		for (int i = 0; i < stringLength; i++)
		{
			currentSize++;

			itr = lastIndex.find(s[i]);
			tempLastIndex = itr->second;

			if (tempLastIndex > currentLastIndex)
			{
				currentLastIndex = tempLastIndex;
			}

			if (i == currentLastIndex)
			{
				partitionSize.push_back(currentSize);
				currentSize = 0;
			}
		}

		return partitionSize;
	}
};