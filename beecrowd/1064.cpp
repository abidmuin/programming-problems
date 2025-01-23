// https://judge.beecrowd.com/en/problems/view/1064

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

  double number = 0.0;
  double positiveNumberSum = 0.0;
  int positiveNumberCounter = 0;

  for (int i = 0; i < 6; i++) {
    cin >> number;

    if (number > 0) {
      positiveNumberCounter++;
      positiveNumberSum += number;
    }
  }

  cout << positiveNumberCounter << " valores positivos" << endl;
  cout << fixed << setprecision(1)
       << (positiveNumberSum / positiveNumberCounter) << endl;

  return 0;
}