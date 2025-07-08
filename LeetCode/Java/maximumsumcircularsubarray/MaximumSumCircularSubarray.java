package maximumsumcircularsubarray;

public class MaximumSumCircularSubarray {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.maxSubarraySumCircular(new int[]{5, -3, 5}));
	}
}

// https://leetcode.com/problems/maximum-sum-circular-subarray/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int maxSubarraySumCircular(int[] nums) {
		/*
		 * Kadane's algo:
		 *  1. maxSum: max subarray sum (non-circular)
		 *  2. minSum: min subarray sum
		 *  3. totalSum: sum of all array elements
		 *
		 * Circular case:
		 *  Maximum circular subarray sum = (totalSum - minSum)
		 *  (removes the min subarray to wrap around)
		 *
		 * Edge case:
		 *  If all elements are negative (totalSum == minSum),
		 *      then (totalSum - minSum) would be 0,
		 *      which is invalid (return the maximum possible sum of a non-empty subarray of nums)
		 *  So return maxSum (standard non-circular result),
		 *      Math.max(maxSum, totalSum - minSum)
		 */

		int curMin = nums[0];
		int curMax = nums[0];
		int minSum = nums[0];
		int maxSum = nums[0];
		int totalSum = nums[0];
		int numsLength = nums.length;

		for (int i = 1; i < numsLength; i++) {
			// Normal Kadane
			curMax = Math.max(curMax + nums[i], nums[i]);
			maxSum = Math.max(curMax, maxSum);

			// Kadane with minimum subarray
			curMin = Math.min(curMin + nums[i], nums[i]);
			minSum = Math.min(curMin, minSum);

			totalSum += nums[i];
		}

		if (totalSum == minSum) {
			return maxSum;
		}

		return Math.max((totalSum - minSum), maxSum);
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)