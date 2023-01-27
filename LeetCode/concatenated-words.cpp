// https://leetcode.com/problems/concatenated-words/

// DP

class Solution
{
public:
	vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
	{
		unordered_set<string> dictionary(words.begin(), words.end());
		vector<string> answer;
		for (const string &word : words)
		{
			const int length = word.length();
			vector<bool> dp(length + 1);
			dp[0] = true;
			for (int i = 1; i <= length; ++i)
			{
				for (int j = (i == length ? 1 : 0); !dp[i] && j < i; ++j)
				{
					dp[i] = dp[j] && dictionary.count(word.substr(j, i - j));
				}
			}
			if (dp[length])
			{
				answer.push_back(word);
			}
		}
		return answer;
	}
};

// DFS

class Solution
{
	bool dfs(const string &word, int length, vector<bool> &visited,
			 const unordered_set<string> &dictionary)
	{
		if (length == word.length())
		{
			return true;
		}
		if (visited[length])
		{
			return false;
		}
		visited[length] = true;
		for (int i = word.length() - (length == 0 ? 1 : 0); i > length; --i)
		{
			if (dictionary.count(word.substr(length, i - length)) &&
				dfs(word, i, visited, dictionary))
			{
				return true;
			}
		}
		return false;
	}

public:
	vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
	{
		unordered_set<string> dictionary(words.begin(), words.end());
		vector<string> answer;
		for (const string &word : words)
		{
			vector<bool> visited(word.length());
			if (dfs(word, 0, visited, dictionary))
			{
				answer.push_back(word);
			}
		}
		return answer;
	}
};