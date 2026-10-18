#include<stdio.h>
int main()
{
    int a;
    float b;
    char cc;
    printf("enter an integer:");
    scanf("%d",&a);
    printf("enter an float number:");
    scanf("%f",&b);
    printf("enter a character:");
    scanf(" %c",&cc);
    printf("integer entered: %d and its size is %d \n",a,sizeof(a));
    printf("float number entered: %.2f and its size is  %d \n",b,sizeof(b));
    printf("character entered: %c and its size is %d \n",cc,sizeof(cc));
    return 0;
}