#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    int value[n];

    printf("Enter values: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
    }

    // Bubble Sort Algorithm
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(value[j] > value[j + 1])
            {
                int temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    printf("Sorted Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", value[i]);
    }
    printf("\n");

    int key,pos=-1;
    printf("Enter the number to search ");
    scanf("%d",&key);

    for(int i =0; i < n;i++)
    {
        if(value[i] == key)
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    {
        printf("value not found");
    }
    else
    {
        printf("%d value found at position %d", key, pos);
    }
    
    return 0;
}
