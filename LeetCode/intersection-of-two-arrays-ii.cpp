// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution
{
public:
	vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
	{
		int nums1Length = nums1.size();
		int nums2Length = nums2.size();
		vector<int> result;

		// store the smaller sized vector in map to handle limited disk memory
		if (nums1Length > nums2Length)
		{
			map<int, int> m;
			map<int, int>::iterator itr;

			for (int num : nums2)
			{
				itr = m.find(num);

				if (itr != m.end())
				{
					itr->second++;
				}
				else
				{
					m.insert({num, 1});
				}
			}

			for (int num : nums1)
			{
				itr = m.find(num);
				if ((itr != m.end()) && (itr->second > 0))
				{
					result.push_back(num);
					itr->second--;
				}
			}
		}
		else
		{
			map<int, int> m;
			map<int, int>::iterator itr;

			for (int num : nums1)
			{
				itr = m.find(num);

				if (itr != m.end())
				{
					itr->second++;
				}
				else
				{
					m.insert({num, 1});
				}
			}

			for (int num : nums2)
			{
				itr = m.find(num);
				if ((itr != m.end()) && (itr->second > 0))
				{
					result.push_back(num);
					itr->second--;
				}
			}
		}

		return result;
	}
};