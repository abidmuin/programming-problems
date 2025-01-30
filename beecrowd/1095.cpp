// https://judge.beecrowd.com/en/problems/view/1095

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int I = 1, J = 60;

  while (J >= 0) {
    cout << "I=" << I << " J=" << J << endl;
    I += 3;
    J -= 5;
  }

  return 0;
}