#include<stdio.h>>

// Author- Krishnaaa

long power(int a, int b)
{
    long pow =1;
    while (b>0)
    {
        pow = pow*a;
        b--;
    }
    return (pow);
}
int main()
{
    int a,b;
    long result;
    printf("Enter number \n");
    scanf("%d",&a);
    printf("Enter power to be raised\n");
    scanf("%d",&b);
    result = power(a,b);
    printf("%d raised to power %d is equal to %ld",a,b,result);
    return 0;
}
