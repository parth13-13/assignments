#include<stdio.h>
int main()
{
    int a;
    printf("enter number:");
    scanf("%d",&a);
    if(a==0)
        printf("entered number is zero.");
    else
    {
        if(a>0)
        {
            if(a%2==0)
            {
                printf("entered number is positive even.");
            }
            else
            {
                printf("entered number is positive odd.");
            }
        }
        else
        {
            if(a%2==0)
            {
                printf("entered number is negative even.");
            }
            else
            {
                printf("entered number is negative odd.");
            }
        }
    }
}