// https://leetcode.com/problems/group-anagrams/

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
	vector<vector<string>> result;

	return result;
}

int main()
{
	vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
	vector<vector<string>> result;

	result = groupAnagrams(str);

	for (auto itr : result)
	{
		cout << itr << endl;
	}

	return 0;
}