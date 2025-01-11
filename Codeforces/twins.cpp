// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;

int main() {
  int coins = 0;
  cin >> coins;

  vector<int> v(coins);
  int totalSum = 0;

  for (int i = 0; i < coins; i++) {
    cin >> v[i];
    totalSum += v[i];
  }

  sort(v.begin(), v.end(), greater<int>{});

  int myCoinsValue = 0;
  int minCoins = 1;

  for (int i = 0; i < coins; i++) {
    myCoinsValue += v[i];
    minCoins++;
    if ((2 * myCoinsValue) > totalSum) {
      break;
    }
  }

  cout << minCoins << endl;

  return 0;
}