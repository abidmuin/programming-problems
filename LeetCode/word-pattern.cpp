// https://leetcode.com/problems/word-pattern/

#include <bits/stdc++.h>

using namespace std;

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

	map<char, string> m;
	map<char, string>::iterator itr;

	int patternLength = pattern.length();
	for (int i = 0; i < patternLength; i++)
	{
		itr = m.find(pattern[i]);
		if ( itr != m.end() && itr->second != vectorString[i])
		{
			return false;
		}

		if (itr == m.end())
		{
			m.insert(pair<char, string>(pattern[i], vectorString[i]));
		}
	}
	return true;
}

int main()
{
	string pattern = "abba";
	string str = "dog cat cat dg";
	cout << wordPattern(pattern, str) << endl;

	return 0;
}