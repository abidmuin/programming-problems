// https://judge.beecrowd.com/en/problems/view/1099

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool isEven(int num) { return ((num & 1) == 0); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int N = 0, X = 0, Y = 0;
  cin >> N;

  int oddNumberCount = 0, sumOfOddNumbers = 0;

  while (N--) {
    cin >> X >> Y;

    if (X > Y) {
      swap(X, Y);
    }

    X++;
    Y--;

    if (isEven(X)) {
      X++;
    }
    if (isEven(Y)) {
      Y--;
    }

    if (X > Y) {
      cout << 0 << endl;
      continue;
    }

    oddNumberCount = (Y - X) / 2 + 1;
    sumOfOddNumbers = (X + Y) * oddNumberCount / 2;

    cout << sumOfOddNumbers << endl;
    oddNumberCount = 0, sumOfOddNumbers = 0;
  }

  return 0;
}