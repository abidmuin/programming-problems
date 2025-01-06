// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

/*
Time Complexity => O(N^2)
Space Complexity => O(N)
*/

class Solution {
public:
  vector<int> minOperations(string boxes) {
    vector<int> result;
    int n = boxes.size();

    for (int i = 0; i < n; i++) {
      int totalSteps = 0;

      for (int j = 0; j < n; j++) {
        if (j == i) {
          continue;
        }

        if (boxes[j] == '1') {
          totalSteps += abs(j - i);
        }
      }

      result.push_back(totalSteps);
    }

    return result;
  }
};