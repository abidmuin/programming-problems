// https://leetcode.com/problems/reverse-bits/

class Solution
{
public:
	uint32_t reverseBits(uint32_t n)
	{
		uint32_t reversedBits = 0;

		for (int i = 0; i < 32; i++)
		{
			reversedBits <<= 1;
			reversedBits |= (n & 1);
			n >>= 1;
		}

		return reversedBits;
	}
};