// https://leetcode.com/problems/reverse-string/

class Solution
{
public:
	void swapCharacter(char &x, char &y)
	{
		char temp = x;
		x = y;
		y = temp;
	}

	void reverseString(vector<char> &s)
	{
		int leftPointer = 0;
		int rightPointer = s.size() - 1;

		while (leftPointer < rightPointer)
		{
			swapCharacter(s[leftPointer], s[rightPointer]);
			leftPointer++;
			rightPointer--;
		}

		for (auto itr = s.begin(); itr != s.end(); itr++)
		{
			cout << *itr << "";
		}
	}
};