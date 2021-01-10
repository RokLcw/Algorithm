#include<stdio.h>

int d(int num)
{
	/*
	136 % 10 =6
	136 / 10 = 13
	13 % 10 = 3
	13 / 10 = 1
	1 % 10 = 1
	1 / 10 = 0
	*/
	int result;

	result = num;
	while (num > 0)
	{
		result = result + (num % 10);
		num /= 10;
	}
	return result;
}

int main()
{
	int arr[10000] = {0, };
	int arr2[10000] = { 0, };
	int num = 0, tmp = 0;

	for (int i = 0; i < 10000; i++)
	{
		arr[i] = d(i);
	}

	for (int i = 0; i < 10000; i++)
	{
		tmp = 0;
		for (int j = 0; j < 10000; j++)
		{
			if (i == arr[j])
			{
				tmp = 1;
				break;
			}
		}
		if(tmp == 0)
			printf("%d\n", i);
	}

	return 0;
}