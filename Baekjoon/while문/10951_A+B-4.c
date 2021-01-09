#include<stdio.h>
int main()
{
	int num1=0, num2=0;
	int ch = 0;

	while (ch = scanf("%d %d", &num1, &num2) != EOF)
	{
		printf("%d\n", num1 + num2);
	}

	return 0;
}