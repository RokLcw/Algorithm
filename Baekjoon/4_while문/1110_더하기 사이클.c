#include<stdio.h>

int main()
{
	int N, cnt=0;
	int tmp1, tmp2, tmp3;

	scanf("%d", &N);

	tmp3 = N;

	while (1)
	{
		tmp1 = tmp3 / 10;
		tmp2 = tmp3 % 10;
		tmp3 = tmp1 + tmp2;

		tmp3 = (tmp2 * 10) + (tmp3 % 10);

		cnt++;

		if (tmp3 == N)
			break;
	}

	printf("%d\n", cnt);

	return 0;
}