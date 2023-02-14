// https://leetcode.com/problems/add-binary/

class Solution
{
public:
	string addBinary(string a, string b)
	{
		string result = "";
		int aSize = a.size() - 1;
		int bSize = b.size() - 1;
		int binarySum = 0;
		int carry = 0;

		while (aSize >= 0 || bSize >= 0)
		{
			binarySum = carry;

			if (aSize >= 0)
			{
				binarySum += a[aSize] - '0';
			}
			if (bSize >= 0)
			{
				binarySum += b[bSize] - '0';
			}

			result += to_string(binarySum % 2);
			aSize--;
			bSize--;

			if (binarySum > 1)
			{
				carry = 1;
			}
			else
			{
				carry = 0;
			}
		}

		if (carry)
		{
			result += to_string(carry);
		}

		reverse(result.begin(), result.end());

		return result;
	}
};