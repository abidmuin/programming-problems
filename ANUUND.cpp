#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCase = 0;
	scanf("%d", &testCase);
	printf("tc %d\n", testCase);

	int arraySize = 0;
	int temp = 0;
	vector<int> v;
	while (testCase--)
	{
		scanf("%d", &arraySize);
		printf("array length %d\n", arraySize);
		while (arraySize--)
		{
			scanf("%d", &temp);
			printf("temp %d\n", temp);
			v.push_back(temp);
		}
		cout << "vector before " << endl;
		for (int i = 0; i < v.size(); i++)
		{
			printf("%d ", v[i]);
		}
		printf("\n");
		for (int i = 0; i < v.size() - 1; i++)
		{
			if ((i < v.size() - 2) && (((i % 2 != 0) && (v[i] < v[i + 1])) || (i % 2 == 0) && (v[i] > v[i + 1])))
			{
				swap(v[i], v[i + 1]);
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			printf("%d ", v[i]);
		}
		printf("\n");
		v.clear();
	}
	return 0;
}