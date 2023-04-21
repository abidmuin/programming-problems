// https://codeforces.com/problemset/problem/455/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;
	
	vector<int> v(n);
	int temp=0;
	
	while(n--){
		cin >> temp;
		v.push_back(temp);
	}

	return 0;
}
