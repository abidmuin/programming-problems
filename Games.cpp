// https://www.spoj.com/problems/GAMES/

/*	The idea of this problem is to address the issue
	of floating point precision and avoid using float or double numbers.
	Instead of using float or double. We need to take the inputs as string
	and then convert the string into integer and pass it to gcd function,
	avoiding using any type of float / double numbers.

	Took me a while to solve this problem but it was worth it.
	Learned something cool ;)
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int _x, int _y)
{
	if (_y == 0)
	{
		return _x;
	}
	return gcd(_y, _x % _y);
}

int main()
{
	// TEST CASES
	int t = 0;
	scanf("%d", &t);

	int length_of_decimal = 0;
	int length_of_str = 0;
	bool has_decimal_point = false;

	for (int i = t; i > 0; i--)
	{
		string str;
		cin >> str;
		length_of_str = str.length();

		for (int j = (length_of_str - 1); j >= 0; j--)
		{
			if (str[j] == '.')
			{
				has_decimal_point = true;
				break;
			}
			else
			{
				length_of_decimal++;
			}
		}

		int x = 0; // numerator
		int y = 0; // denominator

		if (has_decimal_point)
		{
			for (int k = 0; k < length_of_str; k++)
			{
				// STRING TO INTEGER CONVERSION
				if (str[k] != '.')
				{
					x = (x * 10) + (str[k] - '0');
				}
			}
			y = pow(10, length_of_decimal);
			printf("%d\n", y / gcd(x, y));
		}
		else
		{
			printf("1\n");
		}
		has_decimal_point = false;
		length_of_decimal = 0;
	}

	return 0;
}
