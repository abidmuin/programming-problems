// https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfLanterns = 0;
	int lengthOfStreet = 0;

	cin >> numberOfLanterns >> lengthOfStreet;

	vector<int> v(numberOfLanterns);

	for (int i = 0; i < numberOfLanterns; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int x = v[0] - 0;								  // Distance between starting point lanterns and starting point of street (i.e 0)
	int y = lengthOfStreet - v[numberOfLanterns - 1]; // Distance between ending point lanterns and ending point of street

	int maxGlowRadius = 2 * max(x, y); // Maximum glow radius of a lantern
	double minLightRadius = 0;		   // Minimum light radius to cover whole street

	for (int i = 0; i < numberOfLanterns - 1; i++)
	{
		maxGlowRadius = max(maxGlowRadius, (v[i + 1] - v[i]));
	}

	minLightRadius = double(maxGlowRadius / 2.0);

	cout << fixed << setprecision(10) << minLightRadius << endl;

	return 0;
}