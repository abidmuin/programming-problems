// https://judge.beecrowd.com/en/problems/view/1080

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

const double FIRST_NUMBER_WEIGHT = 2;
const double SECOND_NUMBER_WEIGHT = 3;
const double THIRD_NUMBER_WEIGHT = 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int highestNumber = 0;
  int index = 1;
  int inputNumber = 0;

  for (int i = 1; i <= 100; i++) {
    cin >> inputNumber;

    if (inputNumber > highestNumber) {
      highestNumber = inputNumber;
      index = i;
    }
  }

  cout << highestNumber << endl;
  cout << index << endl;

  return 0;
}