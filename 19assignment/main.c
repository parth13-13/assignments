#include<stdio.h>
int main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	if(a>=10 && a<=100)
		printf("number entered lies between 10 and 100.");
	else
		printf("number entered does not lie between 10 and 100.");
}