// https://leetcode.com/problems/maximum-score-after-splitting-a-string/

class Solution {
public:
  int maxScore(string s) {
    int totalnumber = s.size();
    int numberOfZeros = 0;
    int numberOfOnes = 0;

    for (int i = 0; i < totalnumber; i++) {
      if (s[i] == '1') {
        numberOfOnes++;
      }
    }

    int maxScore = INT_MIN;

    for (int i = 0; i < totalnumber - 1; i++) {
      int tempScore = 0;

      if (s[i] == '0') {
        numberOfZeros++;
        tempScore = numberOfZeros + numberOfOnes;
      } else {
        numberOfOnes--;
        tempScore = numberOfZeros + numberOfOnes;
      }

      if (tempScore > maxScore) {
        maxScore = tempScore;
      }
    }

    return maxScore;
  }
};