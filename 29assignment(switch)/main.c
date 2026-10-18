#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three sides of triangle:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        switch((a==b)&&(b==c))
        {
            case 1:
                printf("Equilateral triangle will be formed.");
                break;
            case 0:
                switch(a==b||b==c||a==c)
                {
                    case 1:
                        printf("Isosceles traingle will be formed.");
                        break;
                    case 0:
                        printf("Scalene traingle will be formed.");
                        break;
                }
                break;
        }
    }
    else
    {
        printf("the sides entered cannot form a triangle.");
    }
}
