// https://judge.beecrowd.com/en/problems/view/1043

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>
#include <fstream>
#include <iomanip>

using namespace std;

bool isTriangle(double, double, double);
double calculatePerimeter(double, double, double);
double calculateArea(double, double, double);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  if (isTriangle(a, b, c)) {
    cout << "Perimetro = " << fixed << setprecision(1)
         << calculatePerimeter(a, b, c) << endl;
  } else {
    cout << "Area = " << fixed << setprecision(1) << calculateArea(a, b, c)
         << endl;
  }

  return 0;
}

bool isTriangle(double x, double y, double z) {
  if ((x + y) > z && (y + z) > x && (z + x) > y) {
    return true;
  }

  return false;
}

double calculatePerimeter(double x, double y, double z) { return (x + y + z); }

double calculateArea(double x, double y, double z) {
  return (0.5 * z * (x + y));
}
