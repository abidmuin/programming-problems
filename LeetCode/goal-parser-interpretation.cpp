// https://leetcode.com/problems/goal-parser-interpretation/

class Solution
{
public:
	string interpret(string command)
	{
		string result = "";
		int stringLength = command.size();

		for (int i = 0; i < stringLength; i++)
		{
			if (command[i] == 'G')
			{
				result += "G";
			}
			else if (command[i] == '(' && command[i + 1] == ')')
			{
				result += "o";
				i++;
			}
			else
			{
				result += "al";
				i += 3;
			}
		}

		return result;
	}
};