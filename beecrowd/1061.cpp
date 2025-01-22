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

  cout << "Start Day: " << startDay << "\n";
  cout << "Start Time: " << startHour << ":" << startMinute << ":"
       << startSecond << "\n";
  cout << "End Day: " << endDay << "\n";
  cout << "End Time: " << endHour << ":" << endMinute << ":" << endSecond
       << "\n";

  return 0;
}