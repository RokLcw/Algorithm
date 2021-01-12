// https://www.acmicpc.net/board/view/25689
#include<stdio.h>

int hansu(int N)
{
	int arr[4] = {0, };
	int tmp = 0, j = 0, cnt = 0, cmp=0;

	for (int i=1; i <=N; i++)
	{
		if (i < 100)
			cnt++;
		else if (i == 1000)
			break;
		else
		{
			tmp = i;
			j = 0;

			while (tmp > 0)
			{
				arr[j] = tmp % 10;
				tmp /= 10;
				j++;
			}

			if (arr[2] - arr[1] == arr[1] - arr[0])
			{
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	int N;

	scanf("%d", &N);

	printf("%d", hansu(N));
}