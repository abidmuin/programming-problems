// https://judge.beecrowd.com/en/problems/view/1041

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

  double x = 0.0, y = 0.0;
  cin >> x >> y;

  if (x == 0.0 && y == 0.0) {
    cout << "Origem" << endl;
  } else if (x == 0.0 && (y > 0 || y < 0)) {
    cout << "Eixo Y" << endl;
  } else if (y == 0.0 && (x > 0 || x < 0)) {
    cout << "Eixo X" << endl;
  } else if (x > 0.0 && y > 0.0) {
    cout << "Q1" << endl;
  } else if (x < 0.0 && y > 0.0) {
    cout << "Q2" << endl;
  } else if (x < 0.0 && y < 0.0) {
    cout << "Q3" << endl;
  } else if (x > 0.0 && y < 0.0) {
    cout << "Q4" << endl;
  }

  return 0;
}