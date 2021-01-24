#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000000];
	int cnt = 0;

	fgets(arr, 1000000, stdin);
	arr[strlen(arr) - 1] = '\0';	// 맨 뒤에 \n 삭제

	// 개선판

	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] != 32)	// 공백이 아닐경우
		{
			if (i > 0 && arr[i-1] != 32)	// arr[i-1] != 32 -> 바로 전 칸이 공백일 경우 거짓이 되어 cnt 증가, 공백이 아니면 continue, i>0 조건은 첫 문자가 공백일 경우 대비.
				continue;
			cnt++;
		}
	}

	printf("%d\n", cnt);

	// 처음 푼 알고리즘
	/*if (strlen(arr) == 1)		// 공백만 입력했을때
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

	printf("%d\n", cnt + 1);*/

	return 0;
}