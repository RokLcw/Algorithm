#include<stdio.h>

int main()
{
    int arr[100] = {0, };
    int N=0, M=0, cnt=0;

    arr[1] = 1;

    scanf("%d %d", &M, &N);

    for(int i=2; i<=N; i++)
    {
        if(arr[i] == 1) // 이미 소수가 아니라면 과정 패스
            continue;
        
        cnt = 2;
        while(i*cnt <= N)   // N의 값보다 커질때 까지 반복해서 에라토스테네스의 체 구현
        {
            arr[i * cnt] = 1;   // 소수가 아니라면 1로 바꿔줌
            cnt++;
        }
    }

    for(int i=M; i<=N; i++)
    {
        if(arr[i] == 0)
            printf("%d\n", i);  // 최종적으로 0인 값, 즉 소수만 출력
    }

    return 0;
}
// 에라토스테네스의 체 (어짜피 범위만 보여주면 되니까 미리 배열을 만들어 놓고 출력만 함)

/*
#include<stdio.h>

int main()
{
    int N=0, M=0;
    int flag=0;

    scanf("%d %d", &M, &N);
    
    for(int i=M; i<=N; i++)
    {
        if(i == 1)
            continue;

        flag = 0;
        for(int j=2; j<i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d\n", i);
    }

    return 0;
}
// 소수를 구하는 방법 중 가장 비효율적인 방법이라고 한다.
*/
