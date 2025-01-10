// https://judge.beecrowd.com/en/problems/view/1012

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

const double PI = 3.14159;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double a = 0.0, b = 0.0, c = 0.0;
  cin >> a >> b >> c;

  cout << fixed << setprecision(3) << "TRIANGULO: " << (0.5 * a * c) << endl;
  cout << fixed << setprecision(3) << "CIRCULO: " << (PI * c * c) << endl;
  cout << fixed << setprecision(3) << "TRAPEZIO: " << ((0.5 * c) * (a + b))
       << endl;
  cout << fixed << setprecision(3) << "QUADRADO: " << (b * b) << endl;
  cout << fixed << setprecision(3) << "RETANGULO: " << (a * b) << endl;

  return 0;
}