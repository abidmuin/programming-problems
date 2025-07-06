package besttimetobuyandsellstock;

public class BestTimeToBuyAndSellStock {
	public static void main(String[] args) {
		Solution sol = new Solution();
		int result = sol.maxProfit(new int[]{7, 1, 5, 3, 6, 4});
		System.out.println(result);
	}
}

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public int maxProfit(int[] prices) {
		// track minimum price and then max profit
		int minPrice = Integer.MAX_VALUE;
		int maxProfit = 0;

		for (int price : prices) {
			if (price < minPrice) {
				minPrice = price;
			}
			if ((price - minPrice) > maxProfit) {
				maxProfit = (price - minPrice);
			}
		}

		return maxProfit;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)