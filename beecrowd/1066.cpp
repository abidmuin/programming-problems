// https://judge.beecrowd.com/en/problems/view/1066

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

  int temp = 0;
  int oddCounter = 0;
  int evenCounter = 0;
  int positiveCounter = 0;
  int negativeCounter = 0;

  for (int i = 0; i < 5; i++) {
    cin >> temp;

    if (temp > 0) {
      positiveCounter++;
    } else if (temp < 0) {
      negativeCounter++;
    }

    if ((temp & 1) == 0) {
      evenCounter++;
    } else {
      oddCounter++;
    }
  }

  cout << evenCounter << " valor(es) par(es)" << endl;
  cout << oddCounter << " valor(es) impar(es)" << endl;
  cout << positiveCounter << " valor(es) positivo(s)" << endl;
  cout << negativeCounter << " valor(es) negativo(s)" << endl;

  return 0;
}