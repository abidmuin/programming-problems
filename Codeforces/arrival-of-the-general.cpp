// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test_cases = 0;
	cin >> test_cases;

	vector<int> v;
	vector<int>::iterator itr;

	while (test_cases--)
	{
		int temp = 0;
		cin >> temp;
		v.push_back(temp);
	}

	vector<int> temp;
	temp = v;
	sort(temp.begin(), temp.end());

	int smallest = 0, greatest = 0;
	smallest = temp[0];
	greatest = temp[temp.size() - 1];
	vector<int> mini;
	vector<int> maxi;
	mini.push_back(smallest);
	maxi.push_back(greatest);

	// index of smallest element
	itr = find_end(v.begin(), v.end(), mini.begin(), mini.end());
	int min_index = (itr - v.begin());

	// index of greatest element;
	itr = find(v.begin(), v.end(), greatest);
	int max_index = itr - v.begin();

	if (max_index < min_index)
	{
		int cost = 0;
		cost = (max_index - 0) + (v.size() - min_index - 1);
		cout << cost << endl;
	}
	else
	{
		int cost = 0;
		cost = (max_index - 0) + (v.size() - min_index - 2);
		cout << cost << endl;
	}

	return 0;
}