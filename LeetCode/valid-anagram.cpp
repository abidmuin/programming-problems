// https://leetcode.com/problems/valid-anagram/

// Using HashMap

class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		int str1Size = s.size();
		int str2Size = t.size();

		if (str1Size != str2Size)
		{
			return false;
		}

		unordered_map<char, int> m;
		unordered_map<char, int>::iterator itr;

		for (int i = 0; i < str1Size; i++)
		{
			itr = m.find(s[i]);

			if (itr != m.end())
			{
				itr->second++;
			}
			else
			{
				m.insert({s[i], 1});
			}
		}

		for (int i = 0; i < str1Size; i++)
		{
			itr = m.find(t[i]);

			if (itr != m.end() && (itr->second > 0))
			{
				itr->second--;
			}
			else
			{
				return false;
			}
		}

		return true;
	}
};

// Using Sort

class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());

		return (s == t);
	}
};