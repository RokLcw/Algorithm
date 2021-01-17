#include<stdio.h>

int main()
{
	int N, result = 0;
	char arr[100] = {0, };

	scanf("%d", &N);

	scanf("%s", arr);

	for (int i=0; i<N; i++)
	{
		arr[i] -= 48;
		result += arr[i];
	}

	printf("%d\n", result);

	return 0;
}