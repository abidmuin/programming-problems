// https://leetcode.com/problems/counting-words-with-a-given-prefix/

/*
Time Complexity => O(N * M)
Space Complexity => O(1)
*/

class Solution {
public:
  int prefixCount(vector<string> &words, string pref) {
    int result = 0;
    int n = pref.size();

    for (auto word : words) {
      if (n > word.size()) {
        continue;
      }

      bool isPrefix = true;
      for (int i = 0; i < pref.size(); i++) {
        if (word[i] != pref[i]) {
          isPrefix = false;
          break;
        }
      }

      if (isPrefix) {
        result++;
      }
    }

    return result;
  }
};