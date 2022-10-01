// https://leetcode.com/problems/roman-to-integer/

class Solution
{
public:
	int romanToInt(string s)
	{
		int stringLength = s.size();
		int result = 0;

		for (int i = 0; i < stringLength; i++)
		{
			if (s[i] == 'M')
			{
				result += 1000;
			}
			else if (s[i] == 'D')
			{
				result += 500;
			}
			else if ((s[i] == 'C') && (s[i + 1] == 'M') && (i + 1 < stringLength))
			{
				result += 900;
				i++;
			}
			else if ((s[i] == 'C') && (s[i + 1] == 'D') && (i + 1 < stringLength))
			{
				result += 400;
				i++;
			}
			else if (s[i] == 'C')
			{
				result += 100;
			}
			else if ((s[i] == 'X') && (s[i + 1] == 'C') && (i + 1 < stringLength))
			{
				result += 90;
				i++;
			}
			else if ((s[i] == 'X') && (s[i + 1] == 'L') && (i + 1 < stringLength))
			{
				result += 40;
				i++;
			}
			else if (s[i] == 'L')
			{
				result += 50;
			}
			else if (s[i] == 'X')
			{
				result += 10;
			}
			else if ((s[i] == 'I') && (s[i + 1] == 'X') && (i + 1 < stringLength))
			{
				result += 9;
				i++;
			}
			else if ((s[i] == 'I') && (s[i + 1] == 'V') && (i + 1 < stringLength))
			{
				result += 4;
				i++;
			}
			else if (s[i] == 'V')
			{
				result += 5;
			}
			else if (s[i] == 'I')
			{
				result += 1;
			}
		}

		return result;
	}
};