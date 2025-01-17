// https://judge.beecrowd.com/en/problems/view/1045

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>
#include <functional>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double a = 0.0, b = 0.0, c = 0.0;
  cin >> a >> b >> c;

  vector<double> v = {a, b, c};
  sort(v.begin(), v.end(), greater<double>());

  if (v[0] >= (v[1] + v[2])) {
    cout << "NAO FORMA TRIANGULO" << endl;
  } else {
    if (pow(v[0], 2) == (pow(v[1], 2) + pow(v[2], 2))) {
      cout << "TRIANGULO RETANGULO" << endl;
    } else if (pow(v[0], 2) > (pow(v[1], 2) + pow(v[2], 2))) {
      cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (pow(v[0], 2) < (pow(v[1], 2) + pow(v[2], 2))) {
      cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if ((v[0] == v[1]) && (v[1] == v[2]) && (v[2] == v[0])) {
      cout << "TRIANGULO EQUILATERO" << endl;
    } else if ((v[0] == v[1]) || (v[1] == v[2]) || v[2] == v[1]) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  return 0;
}