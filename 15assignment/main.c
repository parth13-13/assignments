#include<stdio.h>
int main()
{
    int s;
    printf("enter marks:");
    scanf("%d",&s);
    if(s>=90 && s<=100)
        printf("your grade is A");
        
    else if(s>=80 && s<=89)
        printf("your grade is B");
    else if(s>=70 && s<=79)
        printf("your grade is C");
    
    else if(s>=60 && s<=69)
        printf("your grade is D");
    
    else if(s<60)
        printf("your grade is F");
    else
        printf("invalid input.");
}
