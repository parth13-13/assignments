#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three sides of a triangle:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if((a+b>c) && (b+c>a) && (a+c>b))
    {
        printf("the sides entered can form a triangle.");
    }
    else
        printf("the sides entered cannot form a triangle.");
}