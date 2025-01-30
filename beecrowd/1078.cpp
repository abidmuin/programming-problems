// https://judge.beecrowd.com/en/problems/view/1078

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

  int N = 0;
  cin >> N;

  for (int i = 1; i <= 10; i++) {
    cout << i << " x " << N << " = " << (N * i) << endl;
  }

  return 0;
}