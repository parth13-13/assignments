#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("1.Add\n2.Sub\n3.Mul\n4.Div\nenter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("result:%f",a+b);
            break;
        case 2:
            printf("result:%f",a-b);
            break;
        case 3:
            printf("result:%f",a*b);
            break;
        case 4:
            if(b!=0)
            {
                printf("result:%f",a/b);
            }
            else
            {
                printf("cannot divide by zero");
            }
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}
