// https://leetcode.com/problems/unique-morse-code-words/

class Solution
{
public:
	int uniqueMorseRepresentations(vector<string> &words)
	{
		const string morseCodes[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
		unordered_set<string> morseRepresentation;
		unordered_set<string>::iterator itr;
		string tempRepresentation = "";
		int result = 0;

		for (auto &&word : words)
		{
			for (auto &&ch : word)
			{
				tempRepresentation += morseCodes[ch - 'a'];
			}

			itr = morseRepresentation.find(tempRepresentation);

			if (itr == morseRepresentation.end())
			{
				morseRepresentation.insert(tempRepresentation);
			}

			tempRepresentation = "";
		}

		result = morseRepresentation.size();

		return result;
	}
};