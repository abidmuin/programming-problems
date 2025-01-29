// https://judge.beecrowd.com/en/problems/view/1070

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

  if ((number & 1) == 0) {
    number++;
  }

  int counter = 6;

  while (counter--) {
    cout << number << endl;
    number += 2;
  }

  return 0;
}