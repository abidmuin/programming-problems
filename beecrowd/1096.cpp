// https://judge.beecrowd.com/en/problems/view/1095

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INITIAL_I = 1;
const int INITIAL_J = 7;
const int INITIAL_COUNTER = 3;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int I = INITIAL_I, J = INITIAL_J, counter = INITIAL_COUNTER;

  while (I <= 9) {
    cout << "I=" << I << " J=" << J << endl;
    J--;
    counter--;

    if (counter == 0) {
      I += 2;
      J = INITIAL_J;
      counter = INITIAL_COUNTER;
    }
  }

  return 0;
}