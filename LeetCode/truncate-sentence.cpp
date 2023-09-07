// https://leetcode.com/problems/truncate-sentence/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	string truncateSentence(string s, int k)
	{
		istringstream iss(s);
		vector<string> sentence;
		string tempStr = "";
		string result = "";

		while (iss >> tempStr)
		{
			sentence.push_back(tempStr);
		}

		for (int i = 0; i < k - 1; i++)
		{
			result += sentence[i] + " ";
		}
		result += sentence[k - 1];

		return result;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s = "Hello how are you Contestant";
	int k = 4;

	Solution sol;
	cout << sol.truncateSentence(s, k) << endl;

	return 0;
}