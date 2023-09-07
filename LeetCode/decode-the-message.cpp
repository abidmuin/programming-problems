// https://leetcode.com/problems/decode-the-message/

class Solution
{
public:
	string decodeMessage(string key, string message)
	{
		string result = "";
		unordered_map<char, char> charMapping;
		map<char, char>::iterator itr;
		char ch = 'a';

		for (char element : key)
		{
			if ((element != ' ') && (charMapping.find(element) == charMapping.end()))
			{
				charMapping[element] = ch++;
			}
		}

		for (char element : message)
		{
			if (element == ' ')
			{
				result += ' ';
			}
			else
			{
				auto itr = charMapping.find(element);
				result += itr->second;
			}
		}

		return result;
	}
};