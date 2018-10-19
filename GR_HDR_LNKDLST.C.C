#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertion();		//LIST OF FUNCTIONS
void deletion();
void searching();
void insert_beg_list();
void delete_beg_list();
void insert_given_node();
void delete_given_element();
void insert_sorted_list();
void delete_aftergiven_element();
void display();
void create_free_pool();
void unsorted_searching();
void sorted_searching();

struct node				//STRUCTURE DECLARATION
{
	int info;
	struct node *link;
};

struct node *start,* new1,*avail;	//GLOBAL VARIABLE
int count=0;


int main()
{
	int ch,choice;
	fflush(stdin);
	create_free_pool();				//CREATION OF START POINTER
	start=avail;
	create_free_pool();
	new1=avail;						//HEADER NODE
	start->info=NULL;
	start->link=new1;
	new1->info=NULL;
	new1->link=NULL;
	
//	clrscr();
	do
	{
		MENU:
		{
//			clrscr();
			printf("Which operation would you like to perform:\n");
			printf("1.Insertion\n");
			printf("2.Deletion\n");
			printf("3.Traversing\n");
			printf("4.Searching\n");
			printf("5.Display total number of nodes\n");
			printf("6.Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: insertion();
						break;
				case 2:	deletion();
						break;
				case 3:	display();
						break;
				case 4: searching();
						break;
				case 5: printf("\nThe total number of nodes in the list are %d\n",count);
						break;
				case 6: exit(0);
				default:printf("Wrong input. Try again\n");
						goto MENU;
			}
		}
		printf("\nDo you wish to continue back to Main Menu? 1 for yes or any key for no\n");
		scanf("%d",&choice);
	}
	while(choice==1);
}

void insertion()
{
	int ch,choice;
//	clrscr();
	do
	{
		MENU:
		{
//			clrscr();
			printf("Where would you like to enter the elements:\n");
			printf("1.At the beginning of the list\n");
			printf("2.After a given node\n");
			printf("3.Into a sorted list\n");
			printf("4.Display the complete list\n");
			printf("5.Go back to main menu\n");
			printf("6.Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: insert_beg_list();
						break;
				case 2:	insert_given_node();
						break;
				case 3:	insert_sorted_list();
						break;
				case 4: display();
						break;
				case 5: return;
				case 6: exit(0);
				default:printf("Wrong input. Try again\n");
						goto MENU;
			}
		}
		printf("\nDo you want to continue to insert elements? 1 for yes or any key for no\n");
		scanf("%d",&choice);
	}
	while(choice==1);
}

void create_free_pool()
{
	avail = (struct node *) malloc (sizeof(struct node));
	if(avail==NULL)
	{
		printf("Overflow\n");
		exit(0);
	}
}

void insert_beg_list()
{
	int input;
	struct node *new1;
	create_free_pool();
	new1=avail;
	printf("Enter the item which you want to enter");
	scanf("%d",&input);
	new1->info=input;
	new1->link=(start->link)->link;
	(start->link)->link=new1;
	++count;
	(start->link)->info=count;
}

void insert_given_node()
{
	int input,value;
	struct node *new1,*loc=NULL,*ptr=start->link;
	printf("Enter the value of node after which you want to insert the element\n");
	scanf("%d",&value);
	printf("Enter the value of new node");
	scanf("%d",&input);
	create_free_pool();
	new1=avail;
	new1->info=input;
	++count;
	(start->link)->info=count;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if(ptr->info==value)
		{
			loc=ptr;
		}
	}
	if(loc==NULL)
	{
		printf("Item not present in the list\n");
		printf("Inserting element at the beginning of the list\n");
		new1->link=(start->link)->link;
		(start->link)->link=new1;
		return;
	}
	new1->link=loc->link;
	loc->link=new1;
}

void insert_sorted_list()
{
	int input;
	struct node *save,*ptr,*loc=NULL,*loc1=NULL;
	printf("Enter the value of new node\n");
	scanf("%d",&input);
	create_free_pool();
	new1=avail;
	new1->info=input;
	++count;
	(start->link)->info=count;
	save=start->link;
	ptr=(start->link)->link;
	if((start->link)->link==NULL || input<(ptr->info))
	{
		new1->link=(start->link)->link;
		(start->link)->link=new1;
		return;
	}
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->info>input)
			{
				loc=save;
				new1->link=loc->link;
				loc->link=new1;
				return;
			}
			save=ptr;
			ptr=ptr->link;
		}
		if(loc==NULL)
		{
		loc1=save;
		new1->link=loc1->link;
		loc1->link=new1;
		}
	}
}

void display()
{
	struct node *ptr=(start->link);
	if(ptr->link==NULL)
	{
		printf("No elements found in the list\n");
		return;
	}
	printf("There are total of %d elements in the list\n",(start->link)->info);
	printf("The elements in the list are :\n");
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		printf(" %d",ptr->info);
	}
	
}

void deletion()
{
	int ch,choice;
//	clrscr();
	do
	{
		MENU3:
		{
//			clrscr();
			printf("Where would you like to delete the elements:\n");
			printf("1.At the beginning of the list\n");
			printf("2.Delete a given element\n");
			printf("3.Delete after a given element\n");
			printf("4.Display the complete list\n");
			printf("5.Go back to Main Menu\n");
			printf("6.Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: delete_beg_list();
						break;
				case 2:	delete_given_element();
						break;
				case 3:	delete_aftergiven_element();
						break;
				case 4: display();
						break;
				case 5: return;
				case 6: exit(0);
				default:printf("Wrong input. Try again\n");
						goto MENU3;
			}
		}
		printf("\nDo you want to continue to delete elements? 1 for yes or any key for no\n");
		scanf("%d",&choice);
	}
	while(choice==1);
}

void delete_beg_list()
{
	struct node *new1;
	if((start->link)->link==NULL)
	{
		printf("No element exist in the list");
		return;
	}
	new1=(start->link)->link;
	(start->link)->link=((start->link)->link)->link;
	--count;
	(start->link)->info=count;		//STORING THE NO. OF NODES IN HEADER NODE
	free(new1);
	printf("\nElement Deleted\n");
}

void delete_aftergiven_element()
{
	int value;
	struct node *loc=NULL,*loci=NULL,*ptr=start->link,*new1;
	printf("Enter the value of node after which you want to delete the element\n");
	scanf("%d",&value);
	--count;
	(start->link)->info=count;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if(ptr->info==value)
		{
			loci=ptr;
			loc=ptr->link;
		}
	}
	if(loc==NULL)
	{
		printf("Item not present in the list\n");
		return;
	}
	else if(loci==start)		// This condition will not occur
	{
		new1=(start->link)->link;
		(start->link)->link=((start->link)->link)->link;
	}
	else
	{
		new1=loc;
		loci->link=loc->link;
	}
	free(new1);
	printf("\nElement Deleted\n");
}

void delete_given_element()
{
	int value;
	struct node *loc=NULL,*locp=NULL,*save=start->link,*ptr=(start->link)->link,*new1;
	printf("Enter the value of node which you want to delete\n");
	scanf("%d",&value);
	--count;
	(start->link)->info=count;
	while(ptr!=NULL)
	{
		if(ptr->info==value)
		{
			loc=ptr;
			locp=save;
		}
		save=ptr;
		ptr=ptr->link;
	}
	if(loc==NULL)
	{
		printf("Item not present in the list\n");
		return;
	}
	else if(locp==start->link)
	{
		new1=(start->link)->link;
		(start->link)->link=((start->link)->link)->link;
	}
	else
	{
		locp->link=loc->link;
	}
	free(new1);
	printf("\nElement Deleted\n");
}

void searching()
{
	int ch,choice;
//	clrscr();
	do
	{
		MENU4:
		{
//			clrscr();
			printf("Which type of list do you have:\n");
			printf("1.Unsorted List\n");
			printf("2.Sorted List\n");
			printf("3.Go back to Main Menu\n");
			printf("4.Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: unsorted_searching();
						break;
				case 2:	sorted_searching();
						break;
				case 3:	return;
				case 4: exit(0);
				default:printf("Wrong input. Try again\n");
						goto MENU4;
			}
		}
		printf("\nDo you want to continue to search elements? 1 for yes or any key for no\n");
		scanf("%d",&choice);
	}
	while(choice==1);
}
void unsorted_searching()
{
	int input,count1=0;
	struct node *loc=NULL,*ptr=start->link;
	printf("Enter the value of node which you want to search\n");
	scanf("%d",&input);
	while(ptr!=NULL)
	{
		ptr=ptr->link;
		++count1;
		if(ptr->info==input)
		{
			loc=ptr;
			printf("The element %d is at %d position at address %p\n",input,count1,loc);
			return;
		}
	}
	if(loc==NULL)
	{
		printf("Element not found\n");
	}
}

void sorted_searching()
{
	int input,count1=0;
	struct node *loc=NULL,*ptr=start->link;
	printf("Enter the value of node which you want to search\n");
	scanf("%d",&input);
	while(ptr!=NULL)
	{
		ptr=ptr->link;
		++count1;
		if(ptr->info==input)
		{
			loc=ptr;
			printf("The element %d is at %d position at address %p\n",input,count1,loc);
			return;
		}
		else if(ptr->info>input)
		{
			loc=NULL;
		}
	}
	if(loc==NULL)
	{
		printf("Element not found\n");
	}
}
