#include<stdio.h>

int main()
{
	int arr[9] = { 0, };
	int max = 0, seq = 0;

	for (int i=0; i<sizeof(arr)/4; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];

	for (int i=0; i< sizeof(arr) / 4; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			seq = i;
		}
	}

	printf("%d\n%d\n", max, seq+1);
}