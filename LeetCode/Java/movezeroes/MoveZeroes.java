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
		int p1 = 0, p2 = 1;
		int n = nums.length;

		while (p1 < n && p2 < n) {
			if ((nums[p1] == 0) && (nums[p2] == 0)) {
				p2++;
			} else if ((nums[p1] == 0) && (nums[p2] != 0)) {
				int temp = nums[p1];
				nums[p1] = nums[p2];
				nums[p2] = temp;

				p1++;
				p2++;
			} else {
				p1++;
				if (p1 >= p2) {
					p2 = p1 + 1;
				}
			}
		}

		System.out.println(Arrays.toString(nums));
	}
}

//IMPORTANT!! Submit Code Region End(Do not remove this line)