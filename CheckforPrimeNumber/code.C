#include <stdio.h>
#include <conio.h>

int main(){
	int num,i,n,count=0;
	printf("Enter the number which you wan to check ?");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Given number is prime");
	}
	else{
		printf("Given number is not a prime");
	}
}
