#include<stdio.h>

int main()
{
    int arr[8] = {6, 3, 8, 5, 2, 7, 4, 1};
    int tmp=0;

/*
    for(int i=(sizeof(arr)/4)-1; i>0; i--)  // 오름차순
    {
        for(int j=0; j<(sizeof(arr)/4)-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
*/
    for(int i=0; i<(sizeof(arr)/4)-1; i++)  // 내림차순
    {
        for(int j=0; j<(sizeof(arr)/4)-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i=0; i<sizeof(arr)/4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
// (n-1) * (n-1)
// n^2 -2n + 1
// O(n^2)