#include<stdio.h>
#include<string.h>

int main()
{
	int T = 0, R = 0;
	char S[20];

	scanf("%d", &T);

	for (int i=0; i<T; i++)
	{
		scanf("%d", &R);
		scanf("%s", S);

		for (int i = 0; i < strlen(S); i++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}

	return 0;
}