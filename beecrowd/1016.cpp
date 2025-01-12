// https://judge.beecrowd.com/en/problems/view/1016

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

  int distance = 0;
  cin >> distance;

  cout << fixed << setprecision(4) << (distance * 2) << " minutos" << endl;

  return 0;
}