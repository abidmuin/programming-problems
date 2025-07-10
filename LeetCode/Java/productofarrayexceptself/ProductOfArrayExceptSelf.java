package productofarrayexceptself;

import java.util.Arrays;

public class ProductOfArrayExceptSelf {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(Arrays.toString(sol.productExceptSelf(new int[]{1, 2, 3, 4})));
	}
}

// https://leetcode.com/problems/product-of-array-except-self/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int[] productExceptSelf(int[] nums) {
		int arrLength = nums.length;
		int[] result = new int[arrLength];

		// prefix product
		result[0] = 1;
		for (int i = 1; i < arrLength; i++) {
			result[i] = result[i - 1] * nums[i - 1];
		}

		// suffix product
		int suffix = 1;
		for (int i = arrLength - 1; i >= 0; i--) {
			result[i] *= suffix;
			suffix *= nums[i];
		}

		return result;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)