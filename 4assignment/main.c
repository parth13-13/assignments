#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter three integers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("%.2f is the average of the three integers",avg);
}