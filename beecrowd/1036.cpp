// https://judge.beecrowd.com/en/problems/view/1036

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

bool isInvalid(double x) { return isnan(x) || isinf(x); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  double x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
  double x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

  if (isInvalid(x1) || isInvalid(x2)) {
    cout << "Impossivel calcular" << endl;
  } else {
    cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
  }

  return 0;
}