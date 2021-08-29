#include <stdio.h>
//Krishnaaa
long factorial(int x);

int main()
{
    int n;
    long res;
    printf("Enter any number to find its factorial\n");
    scanf("%d",&n);

    if(n<0)
        printf("Factorial of negative number is not defined\n");
    else
    {
        res = factorial(n);
        printf("%d! = %lu",n, res);
    }
    return 0;
}

long factorial(int n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));

}
