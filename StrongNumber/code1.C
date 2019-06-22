#include <stdio.h>
#include <conio.h>

int fact(int n);

int main()
{	
	int num,i,temp,r,sum=0;
	printf("Enter the number which you wan to check ?");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		
		r=num%10;
		sum=sum+fact(r);
		num=num/10;
		
	}	
	if(sum == temp)
	{
		printf("Given Number is a strong number");
	}
	else
	{
		printf("Not a strong number");
	}
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
