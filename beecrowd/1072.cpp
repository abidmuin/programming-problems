// https://judge.beecrowd.com/en/problems/view/1072

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

  int N = 0, X = 0, in = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> X;

    if (X >= 10 && X <= 20) {
      in++;
    }
  }

  cout << in << " in" << endl;
  cout << (N - in) << " out" << endl;

  return 0;
}