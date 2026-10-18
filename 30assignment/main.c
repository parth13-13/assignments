#include<stdio.h>
int main()
{
    int choice,n,yr;
    char ch;
    printf("1.Odd/Even\n2.Positive/Negative/Zero\n3.Vowel/Consonant\n4.Leap Year\n5.Exit\nenter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter an integer:");
            scanf("%d",&n);
            if(n%2==0)
            {
                printf("Even");
            }
            else
            {
                printf("Odd");
            }
            break;
        case 2:
            printf("enter an integer:");
            scanf("%d",&n);
            if(n==0)
            {
                printf("Zero");
            }
            else if(n>0)
            {
                printf("Positive");
            }
            else
            {
                printf("Negative");
            }
            break;
        case 3:
            printf("enter a character:");
            scanf(" %c",&ch);
            if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            {
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                {
                    printf("Vowel");
                }
                else
                {
                    printf("Consonant");
                }
            }
            else
            {
                printf("Not an alphabet");
            }
            break;
        case 4:
            printf("enter year:");
            scanf("%d",&yr);
            if((yr%4==0&&yr%100!=0)||(yr%400==0))
            {
                printf("Leap Year");
            }
            else
            {
                printf("Not a Leap Year");
            }
            break;
        case 5:
            printf("Exiting program");
            break;
        default:
            printf("invalid choice");
    }
}
