// https://judge.beecrowd.com/en/problems/view/1065

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

  int positiveNumberCounter = 0;
  int number = 0;

  for (int i = 0; i < 5; i++) {
    cin >> number;

    if ((number & 1) == 0) {
      positiveNumberCounter++;
    }
  }

  cout << positiveNumberCounter << " valores pares" << endl;

  return 0;
}