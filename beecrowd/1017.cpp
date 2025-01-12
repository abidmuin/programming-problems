// https://judge.beecrowd.com/en/problems/view/1017

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

  int time = 0, speed = 0;
  cin >> time >> speed;

  double result = (speed * time) / 12.0;

  cout << fixed << setprecision(3) << result << endl;

  return 0;
}