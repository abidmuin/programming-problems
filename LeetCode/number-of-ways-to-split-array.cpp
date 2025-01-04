// https://leetcode.com/problems/number-of-ways-to-split-array/

/*
Time Complexity => O(n)
Space Complexity => O(n)
*/
class Solution {
public:
  int waysToSplitArray(vector<int> &nums) {
    int n = nums.size();
    vector<long long int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
      prefixSum[i + 1] = prefixSum[i] + nums[i];
    }

    int result = 0;
    for (int i = 1; i < n; i++) {
      if (prefixSum[i] >= (prefixSum[n] - prefixSum[i])) {
        result++;
      }
    }

    return result;
  }
};

/*
Time Complexity => O(n)
Space Complexity => O(1)
*/
class Solution {
public:
  static int waysToSplitArray(vector<int> &nums) {
    const int n = nums.size();
    long long int totalSum = accumulate(nums.begin(), nums.end(), 0LL);
    long long int leftSum = 0LL;
    int result = 0;

    for (int i = 0; i < n - 1; i++) {
      leftSum += nums[i];
      result += (2 * leftSum >= totalSum);
    }

    return result;
  }
};