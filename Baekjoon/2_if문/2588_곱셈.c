#include<stdio.h>

int main()
{
	/*
		1의 자리 -> 472 % 10
		10의자리 -> (472 % 100) / 10
		100의 자리 -> 472 / 100
	*/
	int A, B, tmp1, tmp2, tmp3;
	int num1, num2, num3, num4;

	scanf("%d %d", &A, &B);

	tmp1 = ((A % 10) * (B % 10));
	tmp2 = ((((A % 100) / 10) * (B % 10)) * 10);
	tmp3 = (((A / 100) * (B % 10)) * 100);
	printf("%d\n", tmp1 + tmp2 + tmp3);
	num1 = tmp1 + tmp2 + tmp3;

	tmp1 = ((A % 10) * ((B % 100) / 10));
	tmp2 = ((((A % 100) / 10) * ((B % 100) / 10)) * 10);
	tmp3 = (((A / 100) * ((B % 100) / 10)) * 100);
	num2 = tmp1 + tmp2 + tmp3;
	printf("%d\n", tmp1 + tmp2 + tmp3);

	tmp1 = ((A % 10) * (B / 100));
	tmp2 = ((((A % 100) / 10) * (B / 100)) * 10);
	tmp3 = (((A / 100) * (B / 100)) * 100);
	num3 = tmp1 + tmp2 + tmp3;
	printf("%d\n", tmp1 + tmp2 + tmp3);

	num4 = num1 + (num2 * 10) + (num3 * 100);
	printf("%d\n", num4);
}