#include<stdio.h>
#include<string.h>

int main()
{
	int num, cnt = 0, result = 0;
	char arr[80];

	scanf("%d", &num);
	
	for (int i=0; i<num; i++)
	{
		scanf("%s", arr);

		cnt = 0;
		result = 0;

		for (int j=0; j<strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				cnt++;
				result += cnt;
			}
			else if (arr[j] == 'X')
				cnt = 0;

		}
 		printf("%d\n", result);
	}

	return 0;
}