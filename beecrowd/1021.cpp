// https://judge.beecrowd.com/en/problems/view/1021

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

  double amount = 0;
  cin >> amount;

  int cents = (amount * 100);

  // Notes (in cents)
  int hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
  // Coins (in cents)
  int penny = 0, nickel = 0, dime = 0, quarter = 0, halfDollar = 0;

  // Notes
  hundred = (cents / 10000);
  cents %= 10000;

  fifty = (cents / 5000);
  cents %= 5000;

  twenty = (cents / 2000);
  cents %= 2000;

  ten = (cents / 1000);
  cents %= 1000;

  five = (cents / 500);
  cents %= 500;

  two = (cents / 200);
  cents %= 200;

  one = (cents / 100);
  cents %= 100;

  // Coins
  halfDollar = (cents / 50);
  cents %= 50;

  quarter = (cents / 25);
  cents %= 25;

  dime = (cents / 10);
  cents %= 10;

  nickel = (cents / 5);
  cents %= 5;

  penny = cents;

  cout << "NOTAS:" << endl;
  cout << hundred << " nota(s) de R$ 100.00" << endl;
  cout << fifty << " nota(s) de R$ 50.00" << endl;
  cout << twenty << " nota(s) de R$ 20.00" << endl;
  cout << ten << " nota(s) de R$ 10.00" << endl;
  cout << five << " nota(s) de R$ 5.00" << endl;
  cout << two << " nota(s) de R$ 2.00" << endl;

  cout << "MOEDAS:" << endl;
  cout << one << " moeda(s) de R$ 1.00" << endl;
  cout << halfDollar << " moeda(s) de R$ 0.50" << endl;
  cout << quarter << " moeda(s) de R$ 0.25" << endl;
  cout << dime << " moeda(s) de R$ 0.10" << endl;
  cout << nickel << " moeda(s) de R$ 0.05" << endl;
  cout << penny << " moeda(s) de R$ 0.01" << endl;

  return 0;
}