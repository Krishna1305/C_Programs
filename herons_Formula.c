#include<stdio.h>
#include<math.h>
#include<conio.h>
// Author- Krishnaaa
int main()
{
    float a,b,c,area;
    //clrscr();
    printf("Enter sides of triangle-");
    scanf("%f %f %f",&a,&b,&c);
    if (a+b>c)
    {
        float s = (a+b+c)/2;
        double temp = s*(s-a)*(s-b)*(s-c);
        area = sqrt(temp);
        printf("Area of triangle is %0.2f",area);
    }
    else
        printf("Please enter valid sides of triangle\n");
    
    
    //return 0;
    printf("\nPress any key to continue :-)");
    getch();
}
