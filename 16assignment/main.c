#include<stdio.h>
int main()
{
    char cc;
    printf("enter a vowel or consonant:");
    scanf(" %c",&cc);
    if((cc>='a' && cc<='z') || (cc>='A' && cc<='Z'))
    
    {
        if(cc=='a' || cc=='e' || cc=='i' || cc=='o' || cc=='u')
        {
            printf(" Entered character is vowel.");
        }
        else if(cc=='A' || cc=='E' || cc=='I' || cc=='O' || cc=='U')
        {
            printf(" Entered character is vowel.");
        }
        else
        {
            printf("Entered character is consonant.");
        }
    }
    else
    {
        printf("entered character is not an alphabet.");
    }
}