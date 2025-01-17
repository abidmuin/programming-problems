// https://judge.beecrowd.com/en/problems/view/1044

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

bool isMultiple(int, int);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int a = 0, b = 0;
  cin >> a >> b;

  if (isMultiple(a, b)) {
    cout << "Sao Multiplos" << endl;
  } else {
    cout << "Nao sao Multiplos" << endl;
  }

  return 0;
}

bool isMultiple(int num1, int num2) {
  return ((num1 % num2) == 0 || (num2 % num1) == 0);
}