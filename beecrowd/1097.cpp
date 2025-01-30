// https://judge.beecrowd.com/en/problems/view/1097

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

  const int INCREMENT_COUNTER = 2;
  const int INITIAL_COUNTER = 3;
  int INITIAL_I = 1;
  int INITIAL_J = 7;

  int I = INITIAL_I, J = INITIAL_J, counter = INITIAL_COUNTER;

  while (I <= 9) {
    cout << "I=" << I << " J=" << J << endl;
    J--;
    counter--;

    if (counter == 0) {
      INITIAL_I += INCREMENT_COUNTER;
      I = INITIAL_I;

      INITIAL_J += INCREMENT_COUNTER;
      J = INITIAL_J;
      counter = INITIAL_COUNTER;
    }
  }

  return 0;
}