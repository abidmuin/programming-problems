// https://leetcode.com/problems/isomorphic-strings/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	bool isIsomorphic(string s, string t)
	{
		int stringSize = s.size();
		map<char, int> m1;
		map<char, int> m2;

		for (int i = 0; i < stringSize; i++)
		{
			if (m1[s[i]] && (m1[s[i]] != t[i]))
			{
				return false;
			}

			if (m2[t[i]] && (m2[t[i]] != s[i]))
			{
				return false;
			}

			m1[s[i]] = t[i];
			m2[t[i]] = s[i];
		}

		return true;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s = "egg";
	string t = "add";

	Solution sol;
	cout << sol.isIsomorphic(s, t) << endl;

	return 0;
}