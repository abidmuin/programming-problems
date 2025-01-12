// https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/

/*
Time Complexity => O(N)
Space Complexity => O(1)
*/

class Solution {
public:
  bool canBeValid(string s, string locked) {
    int n = s.size();

    if (n % 2 != 0) {
      return false;
    }

    bool result = true;

    // Left to Right Traverse
    int openCount = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '(' || locked[i] == '0') {
        openCount++;
      } else {
        openCount--;
      }

      if (openCount < 0) {
        result = false;
        break;
      }
    }

    // Right to Left Traverse
    int closeCount = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == ')' || locked[i] == '0') {
        closeCount++;
      } else {
        closeCount--;
      }

      if (closeCount < 0) {
        result = false;
        break;
      }
    }

    return result;
  }
};
