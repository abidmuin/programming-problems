// https://judge.beecrowd.com/en/problems/view/1061

/*
Time Complexity => O(1)
Space Complexity => O(1)
*/

#include <bits/stdc++.h>

using namespace std;

const int SECONDS_PER_DAY = (24 * 60 * 60);
const int SECONDS_PER_HOUR = (60 * 60);
const int SECONDS_PER_MINUTE = 60;

pair<int, int> parseDayAndTime(const string &dayStr, const string &timeStr) {
  int day = stoi(dayStr.substr(4));
  int hour, minute, second;
  char colon;

  istringstream iss(timeStr);
  iss >> hour >> colon >> minute >> colon >> second;

  int totalSeconds =
      hour * SECONDS_PER_HOUR + minute * SECONDS_PER_MINUTE + second;

  return {day, totalSeconds};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  string startDayStr, startTimeStr, endDayStr, endTimeStr;
  getline(cin, startDayStr);
  getline(cin, startTimeStr);
  getline(cin, endDayStr);
  getline(cin, endTimeStr);

  auto [startDay, startTimeSeconds] =
      parseDayAndTime(startDayStr, startTimeStr);
  auto [endDay, endTimeSeconds] = parseDayAndTime(endDayStr, endTimeStr);

  long long durationSeconds = (endDay * SECONDS_PER_DAY + endTimeSeconds) -
                              (startDay * SECONDS_PER_DAY + startTimeSeconds);

  int days = durationSeconds / SECONDS_PER_DAY;
  durationSeconds %= SECONDS_PER_DAY;

  int hours = durationSeconds / SECONDS_PER_HOUR;
  durationSeconds %= SECONDS_PER_HOUR;

  int minutes = durationSeconds / SECONDS_PER_MINUTE;
  int seconds = durationSeconds % SECONDS_PER_MINUTE;

  cout << days << " dia(s)" << endl;
  cout << hours << " hora(s)" << endl;
  cout << minutes << " minuto(s)" << endl;
  cout << seconds << " segundo(s)" << endl;

  return 0;
}