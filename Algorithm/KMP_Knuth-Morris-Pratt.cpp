#include <bits/stdc++.h>

using namespace std;

void searchKMP(string, string, int, int);
int lps(string, int);

int main()
{
	string *text = "";
	string *pattern = "ABABAABA";

	int textLength = text.size();
	int patternLength = pattern.size();

	searchKMP(text, pattern, textLength, patternLength);
	int LPS = lps(pattern, patternLength);

	for (int i = 0; i < LPS.size(); i++)
	{
		cout << LPS[i] << " ";
	}

	return 0;
}
void searchKMP(string *text, string *pattern, int textLength, int patternLength)
{
	if (*pattern == '\0' || *patternLength == 0 || *text == '\0' || *textLength == 0)
	{
		cout << "Pattern Not Found!"
			 << "\n";
		return 0;
	}
}
int lps(string pattern, int patternLength)
{
	vector<int> LPS(patternLength, 0);

	int idx = 0;

	for (int i = 1; i < patternLength; i++)
	{
		if (pattern[i] == pattern[idx])
		{
			LPS[i] = idx + 1;
			idx++;
		}
		else if (idx > 0)
		{
			idx = LPS[idx - 1];
			// stay on the same index
			i--;
		}
	}
}