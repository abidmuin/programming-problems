// https://judge.beecrowd.com/en/problems/view/1005

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

  double grade1 = 0.0, grade2 = 0.0;
  const double weight1 = 3.5;
  const double weight2 = 7.5;

  cin >> grade1 >> grade2;

  double average =
      (((grade1 * weight1) + (grade2 * weight2)) / (weight1 + weight2));

  cout << fixed << setprecision(5) << "MEDIA = " << average << endl;

  return 0;
}