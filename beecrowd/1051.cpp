// https://judge.beecrowd.com/en/problems/view/1051

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  double salary = 0.0, tax = 0.0;
  cin >> salary;

  if (salary > 2000.01 && salary <= 3000.00) {
    tax = ((salary - 2000.00) * 0.08);
  } else if (salary > 2000.01 && salary <= 3000.00) {
    //
  } else if (salary > 3000.01 && salary <= 4500.00) {
    //
  }

  if (tax > 0.0) {
    cout << "R$ " << fixed << setprecision(2) << tax << endl;
  } else {
    cout << "Isento" << endl;
  }

  return 0;
}