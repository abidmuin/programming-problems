// https://leetcode.com/problems/maximum-sum-circular-subarray/

// Enumerate prefix and suffix sums
/*
Time Complexity => O(N)
Space Complexity => O(N)
*/

class Solution
{
public:
	int maxSubarraySumCircular(vector<int> &nums)
	{
		const int n = nums.size();
		vector<int> right_max(n);
		right_max[n - 1] = nums[n - 1];
		for (int suffix_sum = nums[n - 1], i = n - 2; i >= 0; --i)
		{
			suffix_sum += nums[i];
			right_max[i] = max(right_max[i + 1], suffix_sum);
		}
		int max_sum = nums[0];
		int special_sum = nums[0];
		for (int i = 0, suffix_sum = 0, curMax = 0; i < n; ++i)
		{
			curMax = max(curMax, 0) + nums[i];
			// This is Kadane's algorithm.
			max_sum = max(max_sum, curMax);
			suffix_sum += nums[i];
			if (i + 1 < n)
			{
				special_sum = max(special_sum, suffix_sum + right_max[i + 1]);
			}
		}
		return max(max_sum, special_sum);
	}
};

// Calculate the "Minimum Subarray"
/*
Time Complexity => O(N)
Space Complexity => O(1)
*/

class Solution
{
public:
	int maxSubarraySumCircular(vector<int> &nums)
	{
		int cur_max = 0, cur_min = 0, sum = 0, max_sum = nums[0], min_sum = nums[0];
		for (int num : nums)
		{
			cur_max = max(cur_max, 0) + num;
			max_sum = max(max_sum, cur_max);
			cur_min = min(cur_min, 0) + num;
			min_sum = min(min_sum, cur_min);
			sum += num;
		}
		return sum == min_sum ? max_sum : max(max_sum, sum - min_sum);
	}
};