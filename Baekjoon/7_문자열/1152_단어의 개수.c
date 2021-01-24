#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000000];
	int cnt = 0;

	fgets(arr, 1000000, stdin);
	arr[strlen(arr) - 1] = '\0';	// 맨 뒤에 \n 삭제

	if (strlen(arr) == 1)
	{
		if (arr[0] == 32)
		{
			printf("%d\n", 0);
			return 0;
		}
	}

	for (int i=0; i<strlen(arr); i++)
	{
		if (arr[i] == 32)
		{
			if (i == 0 || i == strlen(arr) - 1)
				continue;
			cnt++;
		}
	}

	printf("%d\n", cnt + 1);

	return 0;
}