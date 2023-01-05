// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int countUpperCase = 0;
	int countLowerCase = 0;
	int wordLength = word.size();

	for (int i = 0; i < wordLength; i++)
	{
		if (isupper(word[i]))
		{
			countUpperCase++;
		}
		else
		{
			countLowerCase++;
		}
	}

	if (countUpperCase > countLowerCase)
	{
		transform(word.begin(), word.end(), word.begin(), ::toupper);
	}
	else
	{
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	}

	cout << word << endl;

	return 0;
}