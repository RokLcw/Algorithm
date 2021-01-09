#include<stdio.h>

int main()
{
	int N;
	int max, min;
	int arr[1000000] = {0, };

	scanf("%d", &N);

	for (int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (int i=0; i<N; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}