// https://judge.beecrowd.com/en/problems/view/1048

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

  double oldSalary = 0.0, newSalary = 0.0, salaryIncrement = 0.0;
  cin >> oldSalary;

  if (oldSalary >= 0.00 && oldSalary <= 400.00) {
    salaryIncrement = (oldSalary * .15);
    newSalary = oldSalary + salaryIncrement;
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salaryIncrement
         << endl;
    cout << "Em percentual: 15 %" << endl;
  }
  if (oldSalary > 400.00 && oldSalary <= 800.00) {
    salaryIncrement = (oldSalary * .12);
    newSalary = oldSalary + salaryIncrement;
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salaryIncrement
         << endl;
    cout << "Em percentual: 12 %" << endl;
  }
  if (oldSalary > 800.00 && oldSalary <= 1200.00) {
    salaryIncrement = (oldSalary * .10);
    newSalary = oldSalary + salaryIncrement;
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salaryIncrement
         << endl;
    cout << "Em percentual: 10 %" << endl;
  }
  if (oldSalary > 1200.0 && oldSalary <= 2000.00) {
    salaryIncrement = (oldSalary * .07);
    newSalary = oldSalary + salaryIncrement;
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salaryIncrement
         << endl;
    cout << "Em percentual: 7 %" << endl;
  }
  if (oldSalary > 2000.0) {
    salaryIncrement = (oldSalary * .04);
    newSalary = oldSalary + salaryIncrement;
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salaryIncrement
         << endl;
    cout << "Em percentual: 4 %" << endl;
  }

  return 0;
}