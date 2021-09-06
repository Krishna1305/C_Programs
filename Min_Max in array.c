#include <stdio.h>
//Krishnaaa
int size=10;
int main()
{
    int arr[size],i,min,max;
    // printf("Enter array")
    for(i=0;i<size;i++)
    {
        printf("Enter %d element of the array-",i);
        scanf("%d",&arr[i]);
    }
    min = max = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }

        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    printf("\nMin = %d and Max = %d", min, max);
    return 0;
}
