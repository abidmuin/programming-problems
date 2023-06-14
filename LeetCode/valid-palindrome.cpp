// https://leetcode.com/problems/valid-palindrome/

class Solution
{
public:
	bool isPalindrome(string s)
	{
		if (s.size() > 1)
		{
			// remove non-alphanumeric characters
			s.erase(remove_if(s.begin(), s.end(), [](char ch)
							  { return !isalnum(ch); }),
					s.end());
		}
		else
		{
			return true;
		}

		// checking string size after removing non-alphanumeric characters
		if (s.size() == 1)
		{
			return true;
		}

		// convert all to lowercase
		for (auto &ch : s)
		{
			ch = tolower(ch);
		}

		int leftPointer = 0;
		int rightPointer = s.size() - 1;

		while (leftPointer <= rightPointer)
		{
			if (s[leftPointer] != s[rightPointer])
			{
				return false;
			}

			leftPointer++;
			rightPointer--;
		}

		return true;
	}
};