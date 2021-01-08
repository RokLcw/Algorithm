#include<stdio.h>

int main()
{
	int T;
	int num1, num2;

	scanf("%d", &T);

	for (int i=0; i<T; i++)
	{
		scanf("%d %d", &num1, &num2);

		printf("%d\n", num1 + num2);
	}
}