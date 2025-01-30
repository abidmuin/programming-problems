// https://judge.beecrowd.com/en/problems/view/1098

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
  const double INCREMENT_COUNTER = 0.2;
  const int INITIAL_COUNTER = 3;
  double INITIAL_I = 0;
  double INITIAL_J = 1;

  double I = INITIAL_I, J = INITIAL_J;
  int counter = INITIAL_COUNTER;

  while (I <= 2) {
    cout << "I=" << I << " J=" << J << endl;
    J++;
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