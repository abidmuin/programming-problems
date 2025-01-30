// https://judge.beecrowd.com/en/problems/view/1074

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

  int N = 0, value = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> value;

    if (value == 0) {
      cout << "NULL" << endl;
    } else if (value > 0) {
      if ((value & 1) == 0) {
        cout << "EVEN POSITIVE" << endl;
      } else {
        cout << "ODD POSITIVE" << endl;
      }
    } else {
      if ((value & 1) == 0) {
        cout << "EVEN NEGATIVE" << endl;
      } else {
        cout << "ODD NEGATIVE" << endl;
      }
    }
  }

  return 0;
}