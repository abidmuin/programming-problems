// https://codeforces.com/problemset/problem/1999/A

/*
Time Complexity => O(log n)
Space Complexity => O(1)
*/

#include <bits/stdc++.h>

using namespace std;

int calculateSum(int number) {
  int result = 0;

  while (number > 0) {
    result += (number % 10);
    number /= 10;
  }

  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int testCase = 0;
  cin >> testCase;

  for (int i = 0; i < testCase; i++) {
    int x = 0;
    cin >> x;
    cout << calculateSum(x) << endl;
  }

  return 0;
}