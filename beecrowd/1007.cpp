// https://judge.beecrowd.com/en/problems/view/1007

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

  int a = 0, b = 0, c = 0, d = 0;
  cin >> a >> b >> c >> d;

  double difference = (a * b) - (c * d);
  cout << "DIFERENCA = " << difference << endl;

  return 0;
}