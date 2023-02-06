// https://leetcode.com/problems/shuffle-the-array/

// NAIVE APPROACH
class Solution
{
public:
	vector<int> shuffle(vector<int> &nums, int n)
	{
		vector<int> firstPart;
		vector<int> secondPart;

		int vecSize = nums.size();

		for (int i = 0; i < vecSize; i++)
		{
			if (i < n)
			{
				firstPart.push_back(nums[i]);
			}
			else
			{
				secondPart.push_back(nums[i]);
			}
		}
		int splitVecSize = vecSize / 2;
		nums.clear();

		for (int i = 0; i < splitVecSize; i++)
		{
			nums.push_back(firstPart[i]);
			nums.push_back(secondPart[i]);
		}

		return nums;
	}
};

// In Place Approach
class Solution
{
public:
	vector<int> shuffle(vector<int> &nums, int n)
	{
		int vecSize = nums.size();
		int swapIndex = n;

		for (int i = 1; i < vecSize; i += 2)
		{
			nums.insert((nums.begin() + i), nums[swapIndex]);
			swapIndex++;
			nums.erase(nums.begin() + swapIndex);
		}

		return nums;
	}
};