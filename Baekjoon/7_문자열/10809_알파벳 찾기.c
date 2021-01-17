#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	int alpabet[26];

	memset(alpabet, -1, sizeof(alpabet));

	scanf("%s", arr);

	for (int i=0; i<strlen(arr); i++)
	{
		if (alpabet[arr[i] - 97] >= 0)
			continue;
		alpabet[arr[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpabet[i]);
	}
}