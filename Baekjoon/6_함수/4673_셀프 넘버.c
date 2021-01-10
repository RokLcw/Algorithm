// 개선한 코드
#include<stdio.h>

int d(int num)
{
	/*
	136 % 10 =6
	136 / 10 = 13
	13 % 10 = 3
	13 / 10 = 1
	1 % 10 = 1
	1 / 10 = 0
	*/
	int result;

	result = num;
	while (num > 0)
	{
		result = result + (num % 10);
		num /= 10;
	}
	return result;
}

int main()
{
	int arr[10000] = {0, };
	int num = 0, check = 0;

	for (int i = 0; i < 10000; i++)
	{
		check = d(i);	// 생성자값 check에 저장
		if (check < 10000)	// 10000 이상을 넘으면 안되므로
		{
			arr[check] = 1;	// 생성자값 위치에 1 저장
		}
	}

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 1)	// 만약 배열에 1이 없을 경우 셀프 넘버
			printf("%d\n", i);
	}

	return 0;
}