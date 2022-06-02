#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int, char, char, char);

int main()
{
	int n = 0;
	cin >> n;
	// NO. OF TOTAL POSSIBLE MOVES = (2^n - 1)
	cout << (1<<n)-1 << endl;
	// PARAMS => (No. of Disks, From, To, Via)
	towerOfHanoi(n, '1', '3', '2');
	return 0;
}
void towerOfHanoi(int n, char _from, char _to, char _via)
{
	if (n == 0)
	{
		return;
	}
	towerOfHanoi(n - 1, _from, _via, _to);
	cout << _from << " " << _to << endl;
	towerOfHanoi(n - 1, _via, _to, _from);
}