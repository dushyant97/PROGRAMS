#include<stdio.h>
#include<conio.h>

void tower(int n,char beg,char aux,char end);

int main()
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	tower(n,'A','B','C');
	getch();
}

void tower(int n,char beg, char aux, char end)
{
	if(n==1)
	{
		printf("\t%c -> %c\n",beg,end);
		return;
	}
	tower(n-1,beg,end,aux);
	printf("\t%c -> %c\n",beg,end);
	tower(n-1,aux,beg,end);
	return;
}
