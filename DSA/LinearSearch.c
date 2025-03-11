#include <stdio.h>
int main()
{
    int arr[] = {5, 13, 7, 10, 34, 57, 20};
    int size = 7;
    int key = 10, pos = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Value not found");
    }
    else
    {
        /* code */
        printf("%d found at pos %d", key, pos);
    }
    printf("\n");

    return 0;
}