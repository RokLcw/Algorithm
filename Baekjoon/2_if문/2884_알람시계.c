#include<stdio.h>

int main()
{
	int H, M;

	scanf("%d %d", &H, &M);

	if (M >= 45)
		printf("%d %d\n", H, M - 45);
	else
	{
		if (H == 0)
			H = 24;
		printf("%d %d\n", H - 1, 60 - (45 - M));
	}
}