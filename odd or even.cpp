#include<stdio.h>
int main()
{
	int num;
	printf("enter the value :");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("invalid input------");
	}
	else if(num%2==0)
	printf("the number is even");
	else
	printf("the number is odd");
}
