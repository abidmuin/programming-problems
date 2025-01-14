// https://judge.beecrowd.com/en/problems/view/1037

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

  double number = 0.0;
  cin >> number;

  if (number < 0 || number > 100) {
    cout << "Fora de intervalo" << endl;
  } else if (number <= 25) {
    cout << "Intervalo [0,25]" << endl;
  } else if (number <= 50) {
    cout << "Intervalo (25,50]" << endl;
  } else if (number <= 75) {
    cout << "Intervalo (50,75]" << endl;
  } else if (number <= 100) {
    cout << "Intervalo (75,100]" << endl;
  }

  return 0;
}