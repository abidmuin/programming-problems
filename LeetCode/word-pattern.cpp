// https://leetcode.com/problems/word-pattern/

class Solution
{
public:
	vector<string> splitString(string str, string delimiter)
	{
		vector<string> vectorStr;
		int start = 0;
		int end = str.find(delimiter);
		while (end != -1)
		{
			vectorStr.push_back(str.substr(start, end - start));
			start = end + delimiter.size();
			end = str.find(delimiter, start);
		}
		vectorStr.push_back(str.substr(start, end - start));

		return vectorStr;
	}

	bool wordPattern(string pattern, string s)
	{
		vector<string> vectorString;
		vectorString = splitString(s, " ");

		int patternLength = pattern.length();
		int vectorLength = vectorString.size();

		if (patternLength != vectorLength)
		{
			return false;
		}

		// Mapping from left to right
		map<char, string> charToWord;
		map<char, string>::iterator itrFirst;

		// Mapping from right to left
		map<string, char> wordToChar;
		map<string, char>::iterator itrSecond;

		for (int i = 0; i < patternLength; i++)
		{
			itrFirst = charToWord.find(pattern[i]);
			if ((itrFirst != charToWord.end()) && (itrFirst->second != vectorString[i]))
			{
				return false;
			}
			itrSecond = wordToChar.find(vectorString[i]);
			if ((itrSecond != wordToChar.end()) && (itrSecond->second != pattern[i]))
			{
				return false;
			}

			if (itrFirst == charToWord.end())
			{
				charToWord.insert(pair<char, string>(pattern[i], vectorString[i]));
			}
			if (itrSecond == wordToChar.end())
			{
				wordToChar.insert(pair<string, char>(vectorString[i], pattern[i]));
			}
		}

		return true;
	}
};
