// https://codeforces.com/problemset/problem/1850/A

/*
Time Complexity => O(1)
Space Complexity => O(1)
*/

#include <bits/stdc++.h>

using namespace std;

int calculateSum(int x, int y, int z) {
  if ((x + y) >= 10 || (y + z) >= 10 || (z + x) >= 10) {
    return true;
  }

  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int testCase = 0;
  cin >> testCase;

  for (int i = 0; i < testCase; i++) {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    if (calculateSum(a, b, c)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}