#include<stdio.h>
//@Krishnaaa
int size = 10;
int main()
{
    int arr[size],pos=0,neg=0,odd=0,even=0;
    int i,n,count=0;
   // printf("Enter Elements of array");
    for (i = 0; i < size; i++)
    {                                               //for input
        printf("Enter %d element\n",i);
        scanf("%d",&arr[i]);
    }
    // printf("Enter Number to be searched-\n");
    // scanf("%d",&n);
    for (i = 0; i < size; i++)
    {                                               //for output
       if(arr[i]>0)
           pos++;
       else
        neg++;
    }
    for (i = 0; i < size; i++)
    {                                               //for output
       if (arr[i]%2==0)
        even++;
    else
        odd++;
    }
    printf("Positive values= %d\n negative values= %d\n Odd values= %d\n Even values=%d ",pos,neg,odd,even);
    return 0;
}
