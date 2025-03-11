#include <stdio.h>
int main()
{
    int arr[] = {5,13,7,10,34,57,20};
    int size = 7;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After Sorting: ");
    for(int i =0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}