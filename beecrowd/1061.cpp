// https://judge.beecrowd.com/en/problems/view/1061

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

  long long totalStartSeconds = (startDay * 24 * 3600) + (startHour * 3600) +
                                (startMinute * 60) + startSecond;
  long long totalEndSeconds =
      (endDay * 24 * 3600) + (endHour * 3600) + (endMinute * 60) + endSecond;

  long long durationSeconds = totalEndSeconds - totalStartSeconds;

  int days = (durationSeconds / (24 * 3600));
  durationSeconds %= (24 * 3600);

  int hours = (durationSeconds / 3600);
  durationSeconds %= 3600;

  int minutes = (durationSeconds / 60);
  int seconds = (durationSeconds % 60);

  cout << days << " dia(s)" << endl;
  cout << hours << " hora(s)" << endl;
  cout << minutes << " minuto(s)" << endl;
  cout << seconds << " segundo(s)" << endl;

  return 0;
}