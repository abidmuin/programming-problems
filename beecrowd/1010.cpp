// https://judge.beecrowd.com/en/problems/view/1010

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

  int totalProducts = 2;
  int productCode = 0;
  int productUnit = 0;
  double unitPrice = 0.0;
  double payment = 0.0;

  for (int i = 0; i < totalProducts; i++) {
    cin >> productCode >> productUnit >> unitPrice;
    payment += (productUnit * unitPrice);
  }

  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << payment << endl;

  return 0;
}