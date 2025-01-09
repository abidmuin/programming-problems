// https://judge.beecrowd.com/en/problems/view/1011

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

  double radius = 0.0;
  cin >> radius;

  double volume = (4.0 / 3) * (PI * radius * radius * radius);
  cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;

  return 0;
}