// https://leetcode.com/problems/defanging-an-ip-address/

class Solution
{
public:
	string defangIPaddr(string address)
	{
		string result = "";
		int stringSize = address.size();

		for (int i = 0; i < stringSize; i++)
		{
			if (address[i] != '.')
			{
				result += address[i];
			}
			else
			{
				result += "[";
				result += address[i];
				result += "]";
			}
		}

		return result;
	}
};