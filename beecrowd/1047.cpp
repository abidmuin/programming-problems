// https://judge.beecrowd.com/en/problems/view/1047

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

  int startHour = 0, startMinute = 0, endHour = 0, endMinute = 0;
  cin >> startHour >> startMinute >> endHour >> endMinute;

  int startTimeinMinutes = (startHour * 60) + startMinute;
  int endTimeinMinutes = (endHour * 60) + endMinute;

  if (endTimeinMinutes <= startTimeinMinutes) {
    endTimeinMinutes += (24 * 60);
  }

  int totalDuration = (endTimeinMinutes - startTimeinMinutes);
  int totalHours = (totalDuration / 60);
  int totalMinutes = (totalDuration % 60);

  cout << "O JOGO DUROU " << totalHours << " HORA(S) E " << totalMinutes
       << " MINUTO(S)" << endl;

  return 0;
}