package maximumsubarray;

public class MaximumSubarray {
	public static void main(String[] args) {
		Solution sol = new Solution();
		int result = sol.maxSubArray(new int[]{-2, 1, -3, 4, -1, 2, 1, -5, 4});
		System.out.println(result);
	}
}

// https://leetcode.com/problems/maximum-subarray/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int maxSubArray(int[] nums) {
		int maxSum = nums[0];
		int currentSum = nums[0];

		// Kadane's Algorithm
		// if subarray sum is positive then extend, else create new subarray
		for (int i = 1; i < nums.length; i++) {
			currentSum = Math.max(currentSum + nums[i], nums[i]);
			maxSum = Math.max(currentSum, maxSum);
		}

		return maxSum;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)