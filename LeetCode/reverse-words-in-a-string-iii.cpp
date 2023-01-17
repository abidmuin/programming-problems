// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// Naive Approach

class Solution
{
public:
	string reverseWords(string s)
	{
		int strLength = s.size();
		int leftPointer = 0;
		int rightPointer = 0;
		int i = 0, j = 0;

		while (leftPointer < strLength)
		{
			while ((s[rightPointer] != ' ') && (rightPointer < strLength))
			{
				rightPointer++;
			}
			i = leftPointer;
			j = rightPointer - 1;
			leftPointer = rightPointer + 1;
			rightPointer = leftPointer;

			// reverse(s.begin() + i, s.begin() + j+1);

			while (i < j)
			{
				swap(s[i], s[j]);
				i++;
				j--;
			}
		}

		return s;
	}
};

// Using Stack

class Solution
{
public:
	string reverseWords(string s)
	{
		int strLength = s.size();
		string result = "";
		string temp = "";
		stack<char> st;

		for (int i = 0; i < strLength; ++i)
		{
			if (s[i] != ' ')
			{
				st.push(s[i]);
			}
			else
			{
				while (st.empty() == false)
				{
					temp = st.top();
					result.append(temp);
					st.pop();
				}
				result.append(" ");
			}
		}

		while (st.empty() == false)
		{
			temp = st.top();
			result.append(temp);
			st.pop();
		}

		return result;
	}
};

// Using Stringstream

class Solution
{
public:
	string reverseWords(string s)
	{
		stringstream ss(s);
		string word = "";
		string result = "";

		while (ss >> word)
		{
			reverse(word.begin(), word.end());
			result.append(word);
			result.append(" ");
		}
		result.pop_back();

		return result;
	}
};