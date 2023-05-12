// https://leetcode.com/problems/palindrome-number/

class Solution
{
public:
	bool isPalindrome(int x)
	{
		string str = to_string(x);

		int leftPointer = 0;
		int rightPointer = str.length() - 1;

		while (leftPointer < rightPointer)
		{
			if (str[leftPointer] != str[rightPointer])
			{
				return false;
			}
			leftPointer++;
			rightPointer--;
		}

		return true;
	}
};