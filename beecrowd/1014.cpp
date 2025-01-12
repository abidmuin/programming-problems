// https://judge.beecrowd.com/en/problems/view/1014

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

  int distance = 0;
  double fuel = 0.0;
  cin >> distance >> fuel;

  double result = (distance / fuel);
  cout << fixed << setprecision(3) << result << " km/l" << endl;

  return 0;
}