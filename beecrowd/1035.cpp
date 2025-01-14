// https://judge.beecrowd.com/en/problems/view/1035

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

  bool flag = false;

  if ((b > c) && (d > a) && (c > 0) && (d > 0) && ((c + d) > (a + b)) &&
      (a % 2 == 0)) {
    flag = true;
  }

  if (flag) {
    cout << "Valores aceitos" << endl;
  } else {
    cout << "Valores nao aceitos" << endl;
  }

  return 0;
}