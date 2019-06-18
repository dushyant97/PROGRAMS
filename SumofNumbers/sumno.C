#include<stdio.h>
#include<conio.h>

int main()
{
	int rem,num,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The sum of given number is %d\n",sum);
}
