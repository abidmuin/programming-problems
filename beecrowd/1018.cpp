// https://judge.beecrowd.com/en/problems/view/1018

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

  int originalAmount = 0;
  cin >> originalAmount;

  int amount = originalAmount;
  int hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

  if (amount >= 100) {
    hundred = amount / 100;
    amount -= (hundred * 100);
  }
  if (amount >= 50) {
    fifty = amount / 50;
    amount -= (fifty * 50);
  }
  if (amount >= 20) {
    twenty = amount / 20;
    amount -= (twenty * 20);
  }
  if (ten >= 10) {
    ten = amount / 10;
    amount -= (ten * 10);
  }
  if (amount >= 5) {
    five = amount / 5;
    amount -= (five * 5);
  }
  if (amount >= 2) {
    two = amount / 2;
    amount -= (two * 2);
  }
  one = amount;

  cout << originalAmount << endl;
  cout << hundred << " nota(s) de R$ 100,00" << endl;
  cout << fifty << " nota(s) de R$ 50,00" << endl;
  cout << twenty << " nota(s) de R$ 20,00" << endl;
  cout << ten << " nota(s) de R$ 10,00" << endl;
  cout << five << " nota(s) de R$ 5,00" << endl;
  cout << two << " nota(s) de R$ 2,00" << endl;
  cout << one << " nota(s) de R$ 1,00" << endl;

  return 0;
}