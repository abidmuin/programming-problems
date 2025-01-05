// https://leetcode.com/problems/shifting-letters-ii/

class Solution {
public:
  string shiftingLetters(string s, vector<vector<int>> &shifts) {
    string result = s;
    int n = result.size();
    vector<int> shiftCounts(n + 1, 0);

    for (auto shift : shifts) {
      int startIndex = shift[0];
      int endIndex = shift[1];
      int shiftDirection = shift[2];
      int shiftValue = (shiftDirection == 1) ? 1 : -1;

      shiftCounts[startIndex] += shiftValue;
      if (endIndex + 1 < n) {
        shiftCounts[endIndex + 1] -= shiftValue;
      }
    }

    int cumulativeShift = 0;
    for (int i = 0; i < n; i++) {
      cumulativeShift += shiftCounts[i];
      char &currentChar = result[i];

      if (cumulativeShift != 0) {
        int shiftedValue = (currentChar - 'a' + cumulativeShift) % 26;

        if (shiftedValue < 0) {
          shiftedValue += 26;
        }

        currentChar = 'a' + shiftedValue;
      }
    }

    return result;
  }
};