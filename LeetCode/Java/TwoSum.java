import java.util.HashMap;
import java.util.Map;

public class TwoSum {
	public static void main(String[] args) {
		Solution sol = new Solution();
		int[] result = sol.twoSum(new int[]{2, 7, 11, 15}, 9);
		System.out.println("[" + result[0] + ", " + result[1] + "]");
	}
}

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int[] twoSum(int[] nums, int target) {
		Map<Integer, Integer> map = new HashMap<>();
		int[] result = new int[2];

		for (int i = 0; i < nums.length; i++) {
			if (map.containsKey(target - nums[i])) {
				result[0] = map.get(target - nums[i]);
				result[1] = i;
				break;
			}

			map.put(nums[i], i);
		}

		return result;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)
