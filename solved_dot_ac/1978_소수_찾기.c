#include<stdio.h>

int main(void)
{
    int N = 0, cnt = 0;
    int arr[100]={0, };

    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(arr[i] == 1)
            continue;
        else if(arr[i] == 2)
            cnt++;
        else if(arr[i] % 2 == 1)
        {
            cnt++;
            for(int j=3; j<arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    cnt--;
                    break;
                }
            }
        }
    }

    printf("%d", cnt);

    return 0;
}