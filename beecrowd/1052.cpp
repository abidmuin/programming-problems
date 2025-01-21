// https://judge.beecrowd.com/en/problems/view/1052

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

  int number = 0;
  cin >> number;

  map<int, string> monthMapping = {
      {1, "January"},   {2, "February"}, {3, "March"},     {4, "April"},
      {5, "May"},       {6, "June"},     {7, "July"},      {8, "August"},
      {9, "September"}, {10, "October"}, {11, "November"}, {12, "December"},
  };

  for (auto month : monthMapping) {
    if (month.first == number) {
      cout << month.second << endl;
    }
  }

  return 0;
}