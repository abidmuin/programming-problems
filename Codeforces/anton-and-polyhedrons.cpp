// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n = 0;
	cin >> n;

	string geometricFigure;
	int totalFaces = 0;

	while (n--)
	{
		cin >> geometricFigure;

		if (geometricFigure == "Tetrahedron")
		{
			totalFaces += 4;
		}
		if (geometricFigure == "Cube")
		{
			totalFaces += 6;
		}
		if (geometricFigure == "Octahedron")
		{
			totalFaces += 8;
		}
		if (geometricFigure == "Dodecahedron")
		{
			totalFaces += 12;
		}
		if (geometricFigure == "Icosahedron")
		{
			totalFaces += 20;
		}
	}

	cout << totalFaces << endl;

	return 0;
}