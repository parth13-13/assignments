#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n%5==0&&n%10==0)
    {
        printf("Divisible by 5 and 10");
    }
    else
    {
        printf("Not divisible by 5 and 10");
    }
    return 0;
}
