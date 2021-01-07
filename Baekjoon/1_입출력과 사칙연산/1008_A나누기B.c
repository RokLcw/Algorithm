#include<stdio.h>

int main()
{
	double A=0, B=0;

	scanf("%lf %lf", &A, &B);

	printf("%.9lf\n", A / B);	// 9번째 자리까지 

	return 0;
}