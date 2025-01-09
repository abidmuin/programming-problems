// https://judge.beecrowd.com/en/problems/view/1008

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

  int employeeNumber = 0;
  double workedHours = 0.0;
  double salaryPerHour = 0.0;

  cin >> employeeNumber >> workedHours >> salaryPerHour;

  cout << "NUMBER = " << employeeNumber << endl;
  cout << fixed << setprecision(2) << "SALARY = U$ "
       << (workedHours * salaryPerHour) << endl;

  return 0;
}