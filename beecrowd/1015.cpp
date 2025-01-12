// https://judge.beecrowd.com/en/problems/view/1015

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
  cin >> x1 >> y1 >> x2 >> y2;
  double result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  cout << fixed << setprecision(4) << result << endl;

  return 0;
}