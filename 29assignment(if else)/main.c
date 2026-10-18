#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three sides of triangle:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if((a+b>c) && (b+c>a) && (a+c>b))
    {
        if(a==b && b==c)
        {
            printf("Equilateral triangle will be formed.");
        }
        else if(a==b || b==c || a==c)
        {
            printf("Isosceles traingle will be formed.");
        }
        else
        {
            printf("Scalene traingle will be formed.");
        }
    }
    else
        printf("the sides entered cannot form a triangle.");
    
    
}