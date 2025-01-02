// https://leetcode.com/problems/count-vowel-strings-in-ranges/

class Solution {
public:
  vector<int> vowelStrings(vector<string> &words,
                           vector<vector<int>> &queries) {
    int n = words.size();
    vector<int> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++) {
      if (isVowel(words[i][0]) && isVowel(words[i].back())) {
        prefixSum[i + 1] = prefixSum[i] + 1;
      } else {
        prefixSum[i + 1] = prefixSum[i];
      }
    }

    vector<int> result;
    for (auto query : queries) {
      int l = query[0];
      int r = query[1];

      result.push_back(prefixSum[r + 1] - prefixSum[l]);
    }

    return result;
  }

private:
  bool isVowel(char ch) {
    // words[i] consists only of lowercase English letters.
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      return true;
    }

    return false;
  }
};