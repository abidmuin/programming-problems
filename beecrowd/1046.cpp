// https://judge.beecrowd.com/en/problems/view/1046

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

  int startTime = 0, endTime = 0;
  cin >> startTime >> endTime;

  int totalHours = 24;

  if (startTime < endTime) {
    totalHours = endTime - startTime;
  } else if (startTime > endTime) {
    totalHours = totalHours - startTime + endTime;
  }

  cout << "O JOGO DUROU " << totalHours << " HORA(S)" << endl;

  return 0;
}