// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int ptr_start = 0, ptr_final = 0, temp_length = 0, max_length = 0, str_length=0;
	str_length = str.size();
	for (int i = 0; i < str_length; i++)
	{
		ptr_start = i;
		if (str[i] == str[i + 1])
		{
			while (str[i] == str[i + 1])
			{
				i++;
			}
			ptr_final = i;
		}
		temp_length = ptr_final - ptr_start + 1;
		max_length = max(max_length, temp_length);
	}
	cout << max_length << endl;
	return 0;
}