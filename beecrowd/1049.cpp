// https://judge.beecrowd.com/en/problems/view/1049

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

  unordered_map<string, string> animalMap = {
      {"vertebrado_ave_carnivoro", "aguia"},
      {"vertebrado_ave_onivoro", "pomba"},
      {"vertebrado_mamifero_onivoro", "homem"},
      {"vertebrado_mamifero_herbivoro", "vaca"},
      {"invertebrado_inseto_hematofago", "pulga"},
      {"invertebrado_inseto_herbivoro", "lagarta"},
      {"invertebrado_anelideo_hematofago", "sanguessuga"},
      {"invertebrado_anelideo_onivoro", "minhoca"}};

  string word1, word2, word3;
  cin >> word1 >> word2 >> word3;

  string key = word1 + "_" + word2 + "_" + word3;

  if (animalMap.find(key) != animalMap.end()) {
    cout << animalMap[key] << endl;
  } else {
    cout << "Animal not found" << endl;
  }

  return 0;
}