// https://judge.beecrowd.com/en/problems/view/1020

/*
Time Complexity => O(1)
Space Complexity => O(1)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int totalDays = 0;
  cin >> totalDays;

  int years = (totalDays / 365);
  int remainingDays = (totalDays % 365);
  int months = (remainingDays / 30);
  int days = (remainingDays % 30);

  cout << years << " ano(s)" << endl;
  cout << months << " mes(es)" << endl;
  cout << days << " dia(s)" << endl;

  return 0;
}