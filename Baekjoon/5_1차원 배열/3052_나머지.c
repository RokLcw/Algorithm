#include<stdio.h>

int main()
{
	int arr[10];
	int cnt=0;

	for (int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}


	for (int i=0; i<10; i++)
	{
		for (int j=i+1; j<10; j++)
		{
			if (arr[i] == arr[j])
			{
				cnt++;
				break;
			}
		}
	}

	printf("%d\n", 10-cnt);

	return 0;
}