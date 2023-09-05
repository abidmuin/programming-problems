// https://leetcode.com/problems/jewels-and-stones/

class Solution
{
public:
	int numJewelsInStones(string jewels, string stones)
	{
		int result = 0;
		unordered_set<char> s;
		unordered_set<char>::iterator itr;

		for (auto &&jewel : jewels)
		{
			s.insert(jewel);
		}

		for (auto &&stone : stones)
		{
			itr = s.find(stone);

			if (itr != s.end())
			{
				result++;
			}
		}

		return result;
	}
};