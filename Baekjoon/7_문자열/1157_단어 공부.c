#include<stdio.h>
#include<string.h>

int main()
{
	char arr[1000000];
	int alpa[26] = { 0, };
	int result=0;
	int tmp = 0;

	scanf("%s", arr);

	for (int i=0; i<strlen(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
			alpa[arr[i] - 65]++;
		else if (arr[i] >= 97 && arr[i] <= 122)
			alpa[arr[i] - 97]++;
	}

	tmp = alpa[0];
	for (int i=0; i<26; i++)
	{
		if (alpa[i] > tmp)
		{
			tmp = alpa[i];
		}
	}

	for (int i=0; i<26; i++)
	{
		if (tmp == alpa[i])
		{
			result = result + (i + 65);
		}
	}

	if (result <= 90)
		printf("%c\n", result);
	else
		printf("?\n");
	
	return 0;
}