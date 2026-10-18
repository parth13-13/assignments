#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter three integers:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<b)
    {
        if(a<c)
        {
            printf("'%d' is smallest", a);
        }
        else
        {
            printf("'%d' is smallest", c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("'%d' is smallest", b);
        }
        else
        {
            printf("'%d' is smallest", c);
        }
    }

    return 0;
}
