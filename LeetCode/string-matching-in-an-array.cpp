// https://leetcode.com/problems/string-matching-in-an-array/

class Solution {
public:
  vector<string> stringMatching(vector<string> &words) {
    unordered_set<string> result;
    int n = words.size();

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if ((j != i) && (words[j].find(words[i]) != string::npos)) {
          result.insert(words[i]);
          break;
        }
      }
    }

    return vector<string>(result.begin(), result.end());
  }
};