package majorityelement;

public class MajorityElement {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.majorityElement(new int[]{2, 2, 1, 1, 1, 2, 2}));
	}
}

// https://leetcode.com/problems/majority-element/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int majorityElement(int[] nums) {
		// Boyer-Moore Voting Algorithm
		// Constraint Assumption: A majority element always exists.
		int count = 0;
		int result = nums[0];

		for (int num : nums) {
			if (count == 0) {
				result = num;
				count++;
			} else {
				count += (num == result) ? 1 : -1;
			}
		}

		return result;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)