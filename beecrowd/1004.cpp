// https://judge.beecrowd.com/en/problems/view/1004

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int a = 0, b = 0;
  cin >> a >> b;

  cout << "PROD = " << (a * b) << endl;

  return 0;
}