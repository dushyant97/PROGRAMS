#include <stdio.h>
#include <conio.h>

int main()
{	
	int range,j,i=1,num,sum=0;
	printf("Enter the number range ?");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}

}
