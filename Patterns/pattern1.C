#include<stdio.h>
#include<conio.h>

int main(){
	int i,j;
	printf("\nPATTERN-1\n");
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	

/* NEXT PATTERN*/

	printf("\nPATTERN-2\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",5-j+1);
		}
		printf("\n");
	}


/* NEXT PATTERN*/

	printf("\nPATTERN-3\n");
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

/* NEXT PATTERN*/

	printf("\nPATTERN-5\n");
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}		
		printf("\n");
	}
	
	/* NEXT PATTERN*/

	printf("\nPATTERN-6\n");
	for(i=5;i>=0;i--)
	{
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}		
		printf("\n");
	}
	
	
	printf("\nPATTERN-3\n");
	for(i=5;i>=1;i--)
	{
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

