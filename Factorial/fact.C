#include <stdio.h>
#include <conio.h>

int fact(int n);

int main()
{
	int result,num;
	printf("Enter the number");
	scanf("%d",&num);
	result = fact(num);
	printf("The factorial of given number is %d",result);
}

int fact(int n)
{	
	int sum;
	if(n>1)
	{
		return n*fact(n-1);
	}	
	else
	{	
		return 1;
	}
}
