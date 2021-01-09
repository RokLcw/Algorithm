#include<stdio.h>

int main()
{
	int arr[10] = {0, };
	int A, B, C;
	int result;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	result = A * B * C;

	while(result > 0)
	{
		arr[result % 10] ++;
		result /= 10;
	}

	for (int i = 0; i < sizeof(arr)/4; i++)
		printf("%d\n", arr[i]);
}