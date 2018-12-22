#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void MENU();
void insertion();
void deletion();
void display();

int a[4];
int front=-1,rear=-1;

int main()
{//	clrscr();
	fflush(stdin);
	MENU();
}

void MENU()
{
	int temp,x;
	printf("\nSelect from the following opertaions on a queue:\n");
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	scanf("%d",&x);
	while(x!=4)
	{
		switch(x)
		{
			case 1:insertion();
					break;
			case 2:deletion();
					break;
			case 3:display();
					break;
			case 4:exit(0);
		}
	exit(0);
	}
}

void insertion()
{
	int temp;
	if(front==rear+1 || (front==0 && rear==3))
	{
		printf("\nOverflow\n");
	}
	else
	{
		if(rear==-1 && front==-1)
		{
			rear=0;
			front=-0;
		}
		else if(rear==3)
		{
			rear=1;
		}
		else
		{
			rear=rear+1;
		}
	printf("\nEnter the elements\n");
	scanf("%d",&a[rear]);
	printf("\nElement inserted\n");
	}
	printf("\nDo you want to continue ? Press 1 for Yes and 2 for No\n");
	scanf("%d",&temp);
	if(temp==1)
	{
		MENU();
	}
	else
	{
		exit(0);
	}
}

void deletion()
{
	int temp;
	if(front==-1)
	{
		printf("Underflow");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==3)
		{
			front=0;
		}
		else
		{
			front=front+1;
		}
		printf("\nElement deleted\n");
	}
	printf("\nDo you want to continue ? Press 1 for Yes and 2 for No\n");
	scanf("%d",&temp);
	if(temp==1)
	{
		MENU();
	}
	else
	{
		exit(0);
	}
}

void display()
{
	int i,temp;
	if(rear==-1 && front==-1)
	{
		printf("\nNo element found\n");
	}
	else
	{
	
		printf("\nThe elements are:");
		for(i=front;i<=rear;i++)
		{
			printf(" %d",i[a]);
		}
	}
	printf("\nDo you want to continue ? Press 1 for Yes and 2 for No\n");
	scanf("%d",&temp);
	if(temp==1)
	{
		MENU();
	}
	else
	{
		exit(0);
	}
}
