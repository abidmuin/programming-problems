// https://judge.beecrowd.com/en/problems/view/1061

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  string day1, time1, day2, time2;

  getline(cin, day1);
  getline(cin, time1);
  getline(cin, day2);
  getline(cin, time2);

  int startDay = stoi(day1.substr(4));
  int endDay = stoi(day2.substr(4));

  int startHour, startMinute, startSecond;
  int endHour, endMinute, endSecond;

  sscanf(time1.c_str(), "%d : %d : %d", &startHour, &startMinute, &startSecond);
  sscanf(time2.c_str(), "%d : %d : %d", &endHour, &endMinute, &endSecond);

  const int totalSecondsPerDay = (24 * 60 * 60);

  int totalSecondsElapsedInStartingDay =
      (startHour * 60 * 60) + (startMinute * 60) + startSecond;

  int totalSecondsInStartingDay =
      totalSecondsPerDay - totalSecondsElapsedInStartingDay;

  int totalSecondsInEndingDay =
      (endHour * 60 * 60) + (endMinute * 60) + endSecond;

  int totalSeconds = totalSecondsInStartingDay + totalSecondsInEndingDay;

  int hours = (totalSeconds / 3600);
  totalSeconds -= (hours * 3600);
  int minutes = (totalSeconds / 60);
  totalSeconds -= (minutes * 60);
  int seconds = (totalSeconds / 60);

  int days = (endDay - startDay);

  if (endHour < startHour) {
    days--;
  } else if ((endHour == startHour) && (endMinute < startMinute)) {
    days--;
  } else if ((endHour == startHour) && (endMinute == startMinute) &&
             (endSecond == startSecond)) {
    days--;
  }

  cout << days << " dia(s)" << endl;
  cout << hours << " hora(s)" << endl;
  cout << minutes << " minuto(s)" << endl;
  cout << seconds << " segundo(s)" << endl;

  return 0;
}