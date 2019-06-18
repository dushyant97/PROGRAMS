#include <stdio.h>
#include<stdlib.h>

int main()
{
	fflush(stdin);
	int arr[10],top=-1,max=10,ch=0,val,i;
	while(ch != 4)
    {
        printf("Enter your choice ?\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Seek\n");
        printf("5. Change\n");
        scanf("%d",&ch);
       switch(ch)
        {
            case 1: if(top == max)
					{
						printf("Stack Overflow");
						break;
					} 
					else
					{
						printf("Enter the value for input\n");
	            		scanf("%d",&val);
	            		top++;
	            		arr[top]=val;     		
						break;
					}
					
            case 2: if(top == -1)
            		{
            			printf("Stack is already empty\n");
            			break;
					}
					else
					{
						printf("Deleting the top-most value\n");
	            		top--;
						break;
					}
					
            case 3: 
					printf("The top-most value of Stack is :\n");
					printf("%d",arr[top]);
					printf("\n");
					break;
					
            case 4: printf("Enter the value which you want ot search\n");
            		scanf("%d",&val);
            		for (i=0;i<=top;i++)
            		{
            			if(arr[i] == val )
            			{
            				printf("Element found !!, It exist at position no. %d", i);
            				printf("\n");
            				break;
						}
					}
					printf("Element does not exist\n");
					break;
			
			case 5:	printf("Enter the value which you want to change");
					scanf("%d",val);
					arr[top]=val;
					break;
					
			default:
					printf("Wrong Input, Enter Value from 1-4");            
        }
    } 
}
