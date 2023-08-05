#include<stdio.h>
int main()
{
	int a=0,b=1,next,i=2,len;
	printf("enter the length:");
	scanf("%d",&len);
	printf("fibonacci series:%d,%d",a,b);
	while(i<len)
	{
		next=a+b;
		printf("%d",next);
		a=b;
		b=next;
		i++;
	}
}