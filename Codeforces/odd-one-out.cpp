// https://codeforces.com/problemset/problem/1915/A

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int testCase = 0;
  cin >> testCase;

  for (int i = 0; i < testCase; i++) {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << (a ^ b ^ c) << endl;
  }

  return 0;
}