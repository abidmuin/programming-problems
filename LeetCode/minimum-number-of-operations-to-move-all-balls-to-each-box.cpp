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

/*
Time Complexity => O(N)
Space Complexity => O(N)
*/
class Solution {
public:
  vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector<int> result(n, 0);

    // Prefix Traversal
    int leftCost = 0, leftBalls = 0;
    for (int i = 0; i < n; i++) {
      result[i] += leftCost;
      leftBalls += (boxes[i] == '1');
      leftCost += leftBalls;
    }

    // Suffix Traversal
    int rightCost = 0, rightBalls = 0;
    for (int i = n - 1; i >= 0; i--) {
      result[i] += rightCost;
      rightBalls += (boxes[i] == '1');
      rightCost += rightBalls;
    }
    return result;
  }
};