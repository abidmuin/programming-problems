// https://leetcode.com/problems/sorting-the-sentence/

class Solution
{
public:
	string sortSentence(string s)
	{
		map<int, string> m;
		map<int, string>::iterator itr;

		int indexValue = 0;
		string word = "";

		stringstream iss(s);

		while (iss >> word)
		{
			indexValue = word.back();
			word.pop_back();
			m.insert({indexValue, word});
		}

		string result = "";

		for (auto &&element : m)
		{
			result += element.second + " ";
		}

		result.pop_back();

		return result;
	}
};