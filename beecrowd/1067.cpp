// https://judge.beecrowd.com/en/problems/view/1067

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

  int number = 0;
  cin >> number;

  if ((number & 1) == 1) {
    for (int i = 1; i <= number; i += 2) {
      cout << i << endl;
    }
  } else {
    for (int i = 1; i < number; i += 2) {
      cout << i << endl;
    }
  }

  return 0;
}