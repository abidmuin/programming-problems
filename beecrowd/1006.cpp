// https://judge.beecrowd.com/en/problems/view/1006

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

  double grade1 = 0.0, grade2 = 0.0, grade3 = 0.0;
  const double weight1 = 2;
  const double weight2 = 3;
  const double weight3 = 5;

  cin >> grade1 >> grade2 >> grade3;

  double average =
      (((grade1 * weight1) + (grade2 * weight2) + (grade3 * weight3)) /
       (weight1 + weight2 + weight3));

  cout << fixed << setprecision(1) << "MEDIA = " << average << endl;

  return 0;
}