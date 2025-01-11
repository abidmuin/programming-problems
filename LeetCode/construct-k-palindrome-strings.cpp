// https://leetcode.com/problems/construct-k-palindrome-strings/

#include <bits/stdc++.h>

class Solution {
public:
  bool canConstruct(string s, int k) {
    int n = s.size();

    if (k > n) {
      return false;
    }

    unordered_map<char, int> counter;

    for (int i = 0; i < s.size(); i++) {
      counter[s[i]]++;
    }

    int oddCount = 0;

    for (auto itr : counter) {
      oddCount += (itr.second % 2);
    }

    return (oddCount <= k);
  }
};
