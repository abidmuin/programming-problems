// https://judge.beecrowd.com/en/problems/view/1013

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

  int a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  int greatestAB = (a + b + abs(a - b)) / 2;
  int greatest = (greatestAB + c + abs(greatestAB - c)) / 2;

  cout << greatest << " eh o maior" << endl;

  return 0;
}