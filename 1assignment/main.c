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
    printf("integer entered: %d \n",a);
    printf("float number entered: %.2f \n",b);
    printf("character entered: %c \n",cc);
    return 0;
}