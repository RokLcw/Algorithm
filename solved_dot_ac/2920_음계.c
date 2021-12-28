#include <stdio.h>

int main()
{
    int arr[8] = { 0, };
    int asc_cnt = 0, des_cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] - arr[i - 1] == 1)
        {
            asc_cnt++;
        }
        else if (arr[i - 1] - arr[i] == 1)
        {
            des_cnt++;
        }
    }

    if (asc_cnt == 7)
        printf("ascending\n");
    else if (des_cnt == 7)
        printf("descending\n");
    else
        printf("mixed\n");

    return 0;
}

/*
단순하게 오름차순, 내림차순 모두 1이 차이가 난다는 점을 이용하여 작성.
오름차순: arr[i] - arr[i-1] == 1 -> +1 이용 (1 -> 2)

내림차순: arr[i-1] - arr[i] == 1 -> -1 이용 (8 -> 7)
*/