#include<stdio.h>
int main()
{
    int a,b,c; a = 54  ,b= 56 , c = 47
    printf("enter three integers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("'%d' is largest",a);
        }
        else
        {
            printf("'%d' is largest",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("'%d' is largest",b);
        }
        else
        {
            printf("'%d' is largest",c);
        }
    }
    return 0;
}
