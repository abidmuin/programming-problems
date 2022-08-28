// https://app.codesignal.com/interview-practice/task/pMvymcahZ8dY4g75q/

int solution(vector<int> a)
{
	int len = a.size();
	int freq[len + 1] = {0};

	for (int i = 0; i < len; i++)
	{
		if (freq[a[i]] == 0)
		{
			freq[a[i]]++;
		}
		else
		{
			return a[i];
		}
	}
	return -1;
}
