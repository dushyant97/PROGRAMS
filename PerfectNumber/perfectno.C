#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i == 0)
		{
			sum=sum+i;
		}
	}
	if(num == sum)
	{
		printf("Given number is a perfect number\n");
	}
	else{
		printf("Given number is not a perfect number\n");
	}
}
