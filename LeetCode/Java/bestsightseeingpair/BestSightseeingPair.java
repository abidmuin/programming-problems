package bestsightseeingpair;

public class BestSightseeingPair {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.maxScoreSightseeingPair(new int[]{8, 1, 5, 2, 6}));
	}
}

// https://leetcode.com/problems/best-sightseeing-pair/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int maxScoreSightseeingPair(int[] values) {
		// for i=0, curMax=values[i]+i
		int curMax = values[0];
		int globalMax = 0;

		// maximize (values[i]+i) + (values[j]-j) for (i<j)
		for (int j = 1; j < values.length; j++) {
			globalMax = Math.max(globalMax, (curMax + values[j] - j));
			curMax = Math.max(curMax, values[j] + j);
		}

		return globalMax;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)