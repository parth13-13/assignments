#include<stdio.h>
int main()
{
    int choice;
    float bal=0.0f,amt;
    while(1)
    {
        printf("\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter deposit amount:");
                scanf("%f",&amt);
                if(amt>0)
                {
                    bal=bal+amt;
                    printf("Deposited: %f",amt);
                }
                else
                {
                    printf("invalid amount");
                }
                break;
            case 2:
                printf("enter withdrawal amount:");
                scanf("%f",&amt);
                if(amt>0&&amt<=bal)
                {
                    bal=bal-amt;
                    printf("Withdrawn: %f",amt);
                }
                else if(amt>bal)
                {
                    printf("insufficient balance");
                }
                else
                {
                    printf("invalid amount");
                }
                break;
            case 3:
                printf("current balance: %f",bal);
                break;
            case 4:
                printf("exiting system....");
                break;
            default:
                printf("invalid choice");
        }
    }
}
