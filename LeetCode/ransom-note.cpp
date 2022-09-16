// https://leetcode.com/problems/ransom-note/

class Solution
{
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int m[256] = {0};
		int r[256] = {0};

		for (int i = 0; i < magazine.size(); i++)
		{
			m[magazine[i]]++;
		}

		for (int i = 0; i < ransomNote.size(); i++)
		{
			if (m[ransomNote[i]] > 0)
			{
				m[ransomNote[i]]--;
			}
			else
			{
				return false;
			}
		}

		return true;
	}
};