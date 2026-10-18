#include<stdio.h>
int main()
{
    int a,b,c,d,res;
    printf("enter four integers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    res=(a+b)*(c-d);
    printf("result of expression : %d",res);
    return 0;
}