#include<stdio.h>
int main()
{
    int s;
    float att;
    printf("enter marks:");
    scanf("%d",&s);
    printf("enter attendance in percentage:");
    scanf("%f",&att);
    if(s>=80 && att>=75)
        printf(" eligible for scholership.");
    else
        printf("not eligible for scholership");
}