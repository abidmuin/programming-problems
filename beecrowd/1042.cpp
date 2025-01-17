// https://judge.beecrowd.com/en/problems/view/1042

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

  int a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  vector<int> originalVector = {a, b, c};
  vector<int> sortedVector = originalVector;

  sort(sortedVector.begin(), sortedVector.end());

  for (auto value : sortedVector) {
    cout << value << endl;
  }

  cout << endl;

  for (auto value : originalVector) {
    cout << value << endl;
  }

  return 0;
}