// https://leetcode.com/problems/non-decreasing-subsequences/

// Backtracking

class Solution
{
public:
	vector<vector<int>> findSubsequences(vector<int> &nums)
	{
		set<vector<int>> result;
		vector<int> sequence;
		function<void(int)> backtrack;
		backtrack = [&nums, &sequence, &result, &backtrack](int index) -> void
		{
			// if we have checked all elements
			if (index == nums.size())
			{
				if (sequence.size() >= 2)
				{
					result.insert(sequence);
				}
				return;
			}
			// if the sequence remains increasing after appending nums[index]
			if (sequence.empty() || sequence.back() <= nums[index])
			{
				// append nums[index] to the sequence
				sequence.push_back(nums[index]);
				// call recursively
				backtrack(index + 1);
				// delete nums[index] from the end of the sequence
				sequence.pop_back();
			}
			// call recursively not appending an element
			backtrack(index + 1);
		};
		backtrack(0);
		return vector(result.begin(), result.end());
	}
};

// Bitmasks

class Solution
{
public:
	vector<vector<int>> findSubsequences(vector<int> &nums)
	{
		int n = nums.size();
		set<vector<int>> result;
		for (int bitmask = 1; bitmask < (1 << n); bitmask++)
		{
			vector<int> sequence;
			for (int i = 0; i < n; i++)
			{
				// check the i-th bit of the bitmask
				if (((bitmask >> i) & 1) == 1)
				{
					sequence.push_back(nums[i]);
				}
			}
			if (sequence.size() >= 2)
			{
				// check whether the sequence is increasing
				bool isIncreasing = true;
				for (int i = 0; i < sequence.size() - 1; i++)
				{
					isIncreasing &= sequence[i] <= sequence[i + 1];
				}
				if (isIncreasing)
				{
					result.insert(sequence);
				}
			}
		}
		return vector(result.begin(), result.end());
	}
};
