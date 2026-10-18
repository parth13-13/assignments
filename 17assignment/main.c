#include<stdio.h>
int main()
{
    char cc;
    printf("enter character:");
    scanf(" %c",&cc);
    if((cc>='a' && cc<='z') || (cc>='A' && cc<='Z'))
        printf("entered character is a alphabet.");
    else if(cc>='0' && cc<='9')
        printf("entered character is a digit.");
    else
        printf("entered character is a special character.");
}