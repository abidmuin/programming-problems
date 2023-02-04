// https://leetcode.com/problems/permutation-in-string/

class Solution
{
public:
	bool checkInclusion(string s1, string s2)
	{
		int s1Length = s1.size();
		int s2Length = s2.size();

		if (s1Length > s2Length)
		{
			return false;
		}

		// <character ASCII value, count>
		map<int, int> m1;
		map<int, int> m2;

		for (int i = 0; i < s1Length; i++)
		{
			m1[s1[i] - 'a']++;
			m2[s2[i] - 'a']++;
		}

		int totalMatch = 0;
		int totalChar = 26;

		for (int i = 0; i < totalChar; i++)
		{
			if (m1[i] == m2[i])
			{
				totalMatch++;
			}
		}

		// Sliding Window
		int leftPointer = 0;
		int mapIndex = 0;
		for (int rightPointer = s1Length; rightPointer < s2Length; rightPointer++)
		{
			if (totalMatch == 26)
			{
				return true;
			}

			mapIndex = (s2[rightPointer] - 'a');
			m2[mapIndex]++;

			if (m1[mapIndex] == m2[mapIndex])
			{
				totalMatch++;
			}
			else if (m2[mapIndex] == (m1[mapIndex] + 1))
			{
				totalMatch--;
			}

			mapIndex = (s2[leftPointer] - 'a');
			m2[mapIndex]--;

			if (m1[mapIndex] == m2[mapIndex])
			{
				totalMatch++;
			}
			else if (m2[mapIndex] == (m1[mapIndex] - 1))
			{
				totalMatch--;
			}
			leftPointer++;
		}

		return (totalMatch == 26);
	}
};