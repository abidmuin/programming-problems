// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int zCount = 0;
	int oCount = 0;

	zCount = count(word.begin(), word.end(), 'z');
	oCount = count(word.begin(), word.end(), 'o');

	if (oCount == (2 * zCount))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}