#include <stdio.h>
#include <conio.h>

int main(){
	int num,i,temp,r,sum=0;
	printf("Enter the number which you wan to check ?");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		
		r=num%10;
		sum=sum*10+r;
		num=num/10;
		
	}	
	if(sum == temp)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}
