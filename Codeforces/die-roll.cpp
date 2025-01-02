// https://codeforces.com/problemset/problem/9/A

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

  int y = 0, w = 0;
  cin >> y >> w;

  int referenceValue = max(y, w);
  int numerator = (6 - referenceValue + 1);
  int denominator = 6;

  int gcdValue = gcd(numerator, denominator);
  numerator /= gcdValue;
  denominator /= gcdValue;

  cout << numerator << "/" << denominator << endl;

  return 0;
}