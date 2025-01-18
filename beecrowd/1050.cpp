// https://judge.beecrowd.com/en/problems/view/1050

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

  unordered_map<int, string> telephoneCode = {
      {61, "Brasilia"},       {71, "Salvador"},      {11, "Sao Paulo"},
      {21, "Rio de Janeiro"}, {32, "Juiz de Fora"},  {19, "Campinas"},
      {27, "Vitoria"},        {31, "Belo Horizonte"}};

  int code = 0;
  cin >> code;

  if (telephoneCode.find(code) != telephoneCode.end()) {
    cout << telephoneCode[code] << endl;
  } else {
    cout << "DDD nao cadastrado" << endl;
  }

  return 0;
}