#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
    {
        printf("Divisible by 3 or 7");
    }
    else
    {
        printf("Not divisible by 3 or 7");
    }
    return 0;
}
