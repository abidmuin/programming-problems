package containsduplicate;

import java.util.HashSet;
import java.util.Set;

public class ContainsDuplicate {
	public static void main(String[] args) {
		Solution sol = new Solution();
		boolean result = sol.containsDuplicate(new int[]{1, 2, 3, 1});
		System.out.println(result);
	}
}

// https://leetcode.com/problems/contains-duplicate
//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public boolean containsDuplicate(int[] nums) {
		Set<Integer> set = new HashSet<>();

		for (int num : nums) {
			if (set.contains(num)) {
				return true;
			}
			set.add(num);
		}

		return false;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)
