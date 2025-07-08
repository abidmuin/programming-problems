package maximumproductsubarray;

public class MaximumProductSubarray {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.maxProduct(new int[]{-2, 3, -4}));
	}
}

// https://leetcode.com/problems/maximum-product-subarray/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int maxProduct(int[] nums) {
		/*
		 * normal Kadane's algo with DP
		 * at each index, track:
		 *  curMaxProduct: the max product ending at this index
		 *  curMinProduct: the min product ending at this index
		 *
		 * this is necessary because multiplying a negative can flip the sign.
		 * store previous max/min to avoid overwriting dependencies.
		 */

		int globalMaxProduct = nums[0];
		int curMaxProduct = nums[0];
		int curMinProduct = nums[0];
		int prevMaxProduct = curMaxProduct;
		int prevMinProduct = curMinProduct;

		for (int i = 1; i < nums.length; i++) {
			prevMaxProduct = curMaxProduct;
			prevMinProduct = curMinProduct;

			curMaxProduct = Math.max(nums[i], Math.max(prevMaxProduct * nums[i], prevMinProduct * nums[i]));
			curMinProduct = Math.min(nums[i], Math.min(prevMaxProduct * nums[i], prevMinProduct * nums[i]));

			globalMaxProduct = Math.max(globalMaxProduct, curMaxProduct);
		}

		return globalMaxProduct;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)