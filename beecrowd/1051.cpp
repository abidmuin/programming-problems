// https://judge.beecrowd.com/en/problems/view/1051

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

  double salary = 0.0, tax = 0.0;
  cin >> salary;

  if (salary > 2000.01) {
    salary -= 2000.00;

    // 2000.01 to 3000.00
    if (salary >= 1000.00) {
      salary -= 1000.00;
      tax += (1000.00 * 0.08);
    } else {
      tax += (salary * 0.08);
      salary = 0.0;
    }

    // 3000.01 to 4500.00
    if (salary >= 1500.00) {
      salary -= 1500.00;
      tax += (1500.00 * 0.18);
    } else {
      tax += (salary * 0.18);
      salary = 0.0;
    }

    // above 4500.00
    if (salary > 0.0) {
      tax += (salary * 0.28);
    }
  }

  if (tax > 0.0) {
    cout << "R$ " << fixed << setprecision(2) << tax << endl;
  } else {
    cout << "Isento" << endl;
  }

  return 0;
}