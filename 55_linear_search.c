#include <stdio.h>

#define SIZE 20

int main()
{
    int arr[SIZE], n, i, val, pos = -1;
    
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("\n Enter the elements: ");
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("\n Enter the value that has to be searched: ");
    scanf("%d", &val);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            pos = i;
            printf("\n %d is found at position %d", val, pos);
            break;
        }
    }
    
    if(pos == -1)
        printf("\n %d does not exist in the array.", val);
    
    return 0;
}
