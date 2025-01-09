// https://judge.beecrowd.com/en/problems/view/1009

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

  string employeeName;
  double fixedSalary = 0.0;
  double totalSale = 0.0;
  double saleCommission = .15;

  cin >> employeeName >> fixedSalary >> totalSale;

  cout << fixed << setprecision(2) << "TOTAL = R$ "
       << (fixedSalary + (totalSale * saleCommission)) << endl;

  return 0;
}