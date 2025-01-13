// https://judge.beecrowd.com/en/problems/view/1019

/*
Time Complexity => O(1)
Space Complexity => O(1)
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int totalSeconds = 0;
  cin >> totalSeconds;

  int hours = (totalSeconds / 3600);
  int remainingSeconds = totalSeconds % 3600;
  int minutes = remainingSeconds / 60;
  int seconds = remainingSeconds % 60;

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}