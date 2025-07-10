package movezeroes;

import java.util.Arrays;

public class MoveZeroes {
	public static void main(String[] args) {
		Solution sol = new Solution();
		sol.moveZeroes(new int[]{0, 1, 0, 3, 12});
	}
}

// https://leetcode.com/problems/move-zeroes/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public void moveZeroes(int[] nums) {
		int insertPos = 0;

		for (int i = 0; i < nums.length; i++) {
			if (nums[i] != 0) {
				if (i != insertPos) {
					nums[insertPos] = nums[i];
					nums[i] = 0;
				}
				insertPos++;
			}
		}

		System.out.println(Arrays.toString(nums));
	}
}

//IMPORTANT!! Submit Code Region End(Do not remove this line)