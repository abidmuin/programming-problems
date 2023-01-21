// https://leetcode.com/problems/restore-ip-addresses/

// Backtracking

class Solution
{
	bool valid(const string &s, int start, int length)
	{
		return length == 1 || (s[start] != '0' && (length < 3 || s.substr(start, length) <= "255"));
	}

	void helper(const string &s, int startIndex, vector<int> &dots, vector<string> &ans)
	{
		const int remainingLength = s.length() - startIndex;
		const int remainingNumberOfIntegers = 4 - dots.size();

		if (remainingLength > remainingNumberOfIntegers * 3 ||
			remainingLength < remainingNumberOfIntegers)
		{
			return;
		}
		if (dots.size() == 3)
		{
			if (valid(s, startIndex, remainingLength))
			{
				string temp;
				int last = 0;
				for (int dot : dots)
				{
					temp.append(s.substr(last, dot));
					last += dot;
					temp.append(".");
				}
				temp.append(s.substr(startIndex));
				ans.push_back(temp);
			}
			return;
		}
		for (int curPos = 1; curPos <= 3 && curPos <= remainingLength; ++curPos)
		{
			// Append a dot at the current position.
			dots.push_back(curPos);
			// Try making all combinations with the remaining string.
			if (valid(s, startIndex, curPos))
			{
				helper(s, startIndex + curPos, dots, ans);
			}
			// Backtrack, i.e. remove the dot to try placing it at the next position.
			dots.pop_back();
		}
	}

public:
	vector<string> restoreIpAddresses(string s)
	{
		vector<int> dots;
		vector<string> ans;
		helper(s, 0, dots, ans);
		return ans;
	}
};

// Iterative

class Solution
{
	bool valid(const string &s, int start, int length)
	{
		return length == 1 || (s[start] != '0' && (length < 3 || s.substr(start, length) <= "255"));
	}

public:
	vector<string> restoreIpAddresses(string s)
	{
		vector<string> ans;
		int length = s.length();
		for (int len1 = max(1, length - 9); len1 <= 3 && len1 <= length - 3; ++len1)
		{
			if (!valid(s, 0, len1))
			{
				continue;
			}
			for (int len2 = max(1, length - len1 - 6); len2 <= 3 && len2 <= length - len1 - 2;
				 ++len2)
			{
				if (!valid(s, len1, len2))
				{
					continue;
				}
				for (int len3 = max(1, length - len1 - len2 - 3);
					 len3 <= 3 && len3 <= length - len1 - len2 - 1; ++len3)
				{
					if (valid(s, len1 + len2, len3) &&
						valid(s, len1 + len2 + len3, length - len1 - len2 - len3))
					{
						ans.push_back(s.substr(0, len1) + "." + s.substr(len1, len2) + "." +
									  s.substr(len1 + len2, len3) + "." +
									  s.substr(len1 + len2 + len3));
					}
				}
			}
		}
		return ans;
	}
};