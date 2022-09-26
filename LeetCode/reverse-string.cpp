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
		int stringLength = s.size();
		int leftPointer = 0;
		int rightPointer = stringLength - 1;
		int midPoint = stringLength / 2;

		while (leftPointer < midPoint)
		{
			swapCharacter(s[leftPointer], s[rightPointer]);
			leftPointer++;
			rightPointer--;
		}
        
        for(auto itr=s.begin(); itr!=s.end(); itr++){
            cout << *itr << "";
        }
	}
};