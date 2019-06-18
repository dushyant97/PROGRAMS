#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,a=0,b=1,c;
	printf("Enter the lmit\n");
	scanf("%d",&num);
	printf("The fibonacci Series is:\n");
	for(i=1;i<num;i++)
	{
		printf("%d \t",a);
		c=a+b;
		a=b;
		b=c;		
	}
	
}
