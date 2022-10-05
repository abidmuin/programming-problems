// https://www.hackerrank.com/challenges/time-conversion/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
	int stringLength = s.size();
	int hour = stoi(s.substr(0, 2));

	string timePeriod = s.substr(stringLength - 2, stringLength - 1);
	s.erase(stringLength - 2, stringLength - 1);

	if (timePeriod == "AM")
	{
		if (hour == 12)
		{
			s.replace(0, 2, "00");
		}
	}

	if (timePeriod == "PM")
	{
		if (hour != 12)
		{
			hour += 12;
			s.replace(0, 2, to_string(hour));
		}
	}

	return s;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
