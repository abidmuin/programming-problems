// https://judge.beecrowd.com/en/problems/view/1038

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

class Product {
private:
  int code;
  string specification;
  double price;

public:
  Product() {
    this->code = 0;
    this->specification = "";
    this->price = 0.0;
  }

  Product(int code, string specification, double price) {
    this->code = code;
    this->specification = specification;
    this->price = price;
  }

  int getCode() const { return this->code; }

  double calculatePrice(int quantity) const { return price * quantity; }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  vector<Product> products = {
      Product(1, "Cachorro Quente", 4.00), Product(2, "X-Salada", 4.50),
      Product(3, "X-Bacon", 5.00), Product(4, "Torrada simples", 2.00),
      Product(5, "Refrigerante", 1.50)};

  int productCode = 0, productQuantity = 0;
  cin >> productCode >> productQuantity;

  double price = 0.0;
  for (const auto product : products) {
    if (product.getCode() == productCode) {
      price = product.calculatePrice(productQuantity);
      break;
    }
  }

  cout << fixed << setprecision(2) << "Total: R$ " << price << endl;
  return 0;
}