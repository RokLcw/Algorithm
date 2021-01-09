#include<stdio.h>

int main()
{
	int C;
	int N, arr[1000] = {0, };
	float avg=0, cnt=0, result=0;

	scanf("%d", &C);

	for (int i=0; i<C; i++)
	{
		scanf("%d", &N);

		avg = 0;
		cnt = 0;

		for (int j=0; j<N; j++)
		{
			scanf("%d", &arr[j]);
			avg += arr[j];
		}
		avg /= N;

		for (int j=0; j<N; j++)
		{
			if (arr[j] > avg)
			{
				cnt++;
			}
		}

		result = cnt / N * 100;
		printf("%.3f%%\n", result);
	}
}