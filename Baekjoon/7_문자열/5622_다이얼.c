#include<stdio.h>
#include<string.h>

int main()
{
	char arr[16];
	int num[16] = { 0, };
	int result = 0;

	// 개선판


	// 처음에 짠 코드
	/*scanf("%s", arr);

	for (int i=0; i<strlen(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 67)
			num[i] = 2;
		else if (arr[i] >= 68 && arr[i] <= 70)
			num[i] = 3;
		else if (arr[i] >= 71 && arr[i] <= 73)
			num[i] = 4;
		else if (arr[i] >= 74 && arr[i] <= 76)
			num[i] = 5;
		else if (arr[i] >= 77 && arr[i] <= 79)
			num[i] = 6;
		else if (arr[i] >= 80 && arr[i] <= 83)
			num[i] = 7;
		else if (arr[i] >= 84 && arr[i] <= 86)
			num[i] = 8;
		else if (arr[i] >= 87 && arr[i] <= 90)
			num[i] = 9;
	}

	for (int i = 0; i < strlen(arr); i++) {
		result = result + num[i] + 1;
	}

	printf("%d\n", result);

	return 0;*/
}