// https://judge.beecrowd.com/en/problems/view/1040

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

  double n1 = 0, n2 = 0, n3 = 0, n4 = 0;
  int w1 = 2, w2 = 3, w3 = 4, w4 = 1;
  cin >> n1 >> n2 >> n3 >> n4;

  double average =
      ((n1 * w1) + (n2 * w2) + (n3 * w3) + (n4 * w4)) / (w1 + w2 + w3 + w4);

  cout << "Media: " << fixed << setprecision(1) << average << endl;

  if (average >= 7.0) {
    cout << "Aluno aprovado." << endl;
  } else if (average < 5.0) {
    cout << "Aluno reprovado." << endl;
  } else if (average >= 5.0 && average <= 6.9) {
    cout << "Aluno em exame." << endl;

    double examScore = 0;
    cin >> examScore;
    cout << "Nota do exame: " << fixed << setprecision(1) << examScore << endl;

    average = (average + examScore) / 2;

    if (average >= 5.0) {
      cout << "Aluno aprovado." << endl;
    } else if (average <= 4.9) {
      cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << fixed << setprecision(1) << average << endl;
  }
  return 0;
}