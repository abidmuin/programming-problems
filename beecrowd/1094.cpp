// https://judge.beecrowd.com/en/problems/view/1094

/*
Time Complexity =>
Space Complexity =>
*/

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ifstream input("input.txt");
  ofstream output("output.txt");

  int N = 0;
  cin >> N;

  int totalCoelhos = 0, totalRatos = 0, totalSapos = 0, totalAnimals = 0;

  int number = 0;
  char ch;

  for (int i = 0; i < N; i++) {
    cin >> number >> ch;

    if (ch == 'C') {
      totalCoelhos += number;
    } else if (ch == 'R') {
      totalRatos += number;
    } else if (ch == 'S') {
      totalSapos += number;
    }

    totalAnimals += number;
  }

  cout << "Total: " << totalAnimals << " cobaias" << endl;
  cout << "Total de coelhos: " << totalCoelhos << endl;
  cout << "Total de ratos: " << totalRatos << endl;
  cout << "Total de sapos: " << totalSapos << endl;
  cout << fixed << setprecision(2) << "Percentual de coelhos: "
       << ((double)totalCoelhos / totalAnimals) * 100 << " %" << endl;
  cout << fixed << setprecision(2)
       << "Percentual de ratos: " << ((double)totalRatos / totalAnimals) * 100
       << " %" << endl;
  cout << fixed << setprecision(2)
       << "Percentual de sapos: " << ((double)totalSapos / totalAnimals) * 100
       << " %" << endl;

  return 0;
}