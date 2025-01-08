// https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/

class Solution {
public:
  int countPrefixSuffixPairs(vector<string> &words) {
    int result = 0;
    int n = words.size();
    bool isPrefix = false;
    bool isSuffix = false;

    for (int i = 0; i < n - 1; i++) {
      for (int j = n - 1; j > i; j--) {
        if (words[i].size() > words[j].size()) {
          continue;
        }

        isPrefix = checkPrefix(words[i], words[j]);
        isSuffix = checkSuffix(words[i], words[j]);

        if (isPrefix && isSuffix) {
          result++;
        }
      }
    }

    return result;
  }

private:
  bool checkPrefix(string str1, string str2) {
    int n = str1.size();
    bool flag = true;

    for (int i = 0; i < n; i++) {
      if (str1[i] != str2[i]) {
        flag = false;
        break;
      }
    }

    return flag;
  }

  bool checkSuffix(string str1, string str2) {
    int n1 = str1.size();
    int n2 = str2.size();
    bool flag = true;

    while (n1 > 0) {
      if (str1[n1 - 1] != str2[n2 - 1]) {
        flag = false;
      }
      n1--;
      n2--;
    }

    return flag;
  }
};