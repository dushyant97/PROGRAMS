#include <stdio.h>
#include <conio.h>
#include <math.h>

void arm(int);

int main()
{	
	int n,i;
	printf("Enter the number range ?");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		arm(i);
	}
}

void arm(int i)
{
	int r,num=i,temp=i,count=0,sum=0;
	while(i>0)
	{
		i=i/10;
		count++;
	}
	while(temp>0)
	{
		r=temp%10;
		temp=temp/10;
		sum=sum+pow(r,count);
	}
	if(sum == num)
	{
		printf("%d\t",num);
	}
}
