// https://judge.beecrowd.com/en/problems/view/1079

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

  int N = 0;
  cin >> N;

  double firstNumber = 0, secondNumber = 0, thirdNumber = 0;

  for (int i = 0; i < N; i++) {
    cin >> firstNumber >> secondNumber >> thirdNumber;

    double sum = (firstNumber * FIRST_NUMBER_WEIGHT) +
                 (secondNumber * SECOND_NUMBER_WEIGHT) +
                 (thirdNumber * THIRD_NUMBER_WEIGHT);
    double average = sum / (FIRST_NUMBER_WEIGHT + SECOND_NUMBER_WEIGHT +
                            THIRD_NUMBER_WEIGHT);

    cout << fixed << setprecision(1) << average << endl;
  }

  return 0;
}