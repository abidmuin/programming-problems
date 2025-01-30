// https://judge.beecrowd.com/en/problems/view/1071

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

  int minNumber = 0, maxNumber = 0, sumOfOddNumbers = 0;
  cin >> minNumber >> maxNumber;

  if (minNumber > maxNumber) {
    swap(minNumber, maxNumber);
  }

  if ((minNumber & 1) == 0) {
    minNumber++;
  } else {
    minNumber += 2;
  }

  while (minNumber < maxNumber) {
    sumOfOddNumbers += minNumber;
    minNumber += 2;
  }

  cout << sumOfOddNumbers << endl;

  return 0;
}