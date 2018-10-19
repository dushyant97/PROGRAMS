#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void converter(char *infix, char *stack, char *postfix);
void shifter(char *infix);
int precedence(char input);
void operator(char *infix, char *stack, char *postfix, int i);
void addinfix_stack(char *infix, char *stack, int i);
void addinfix_postfix(char *infix, char *postfix, int i);
void addstack_postfix(char *stack, char* postfix);
void display(char *postfix);

int c,top=-1,j=-1;			//  		j is index value of postfix , top is index value of stack

void main()
{
	int i;
	char infix[100],stack[100],postfix[100];
	fflush(stdin);
	clrscr();
	printf("\nEnter size of expression\n");
	scanf("%d",&c);
	c++;										//Since enter is already in queue and we want to add one more bracket at the end
	printf("\nEnter the expression\n");
	for(i=0;i<c;i++)
	{
		scanf("%c",&infix[i]);
	}
	shifter(infix);
	converter(infix,stack,postfix);
	display(postfix);
	getch();
}

void shifter(char *infix)
{
	int i;
	infix[0]='(';
	infix[c]=')';
	printf("\nTHE GIVEN INFIX EXPRESSION IS:\n");
	for(i=0;i<=c;i++)
	{
		printf(" %c",infix[i]);
	}
}

void converter(char *infix,char *stack,char *postfix)
{
	int i;
	top++;
	printf("\nvalue of top is %d\n",top);

	for(i=0;i<=c;i++)
	{
		if(infix[i]>='A' && infix[i]<='Z')
		{
		addinfix_postfix(infix,postfix,i);
		}
		else if (infix[i]>='a' && infix[i]<='z')
		{
		addinfix_postfix(infix,postfix,i);
		}
		else if(infix[i]>='0' && infix[i]<='9')
		{
		addinfix_postfix(infix,postfix,i);
		}
		else if(infix[i]=='*' || infix[i]=='+' ||infix[i]=='-' || infix[i]=='/' || infix[i]=='^'||infix[i]=='(' || infix[i]==')')
		{
		operator(infix,stack,postfix,i);
		}
		printf("\nInfix at index value %d is %c",i+1,infix[i]);
		printf("\nSTACK at index value %d is %c",top+1,stack[top]);
		printf("\nPostfix at index value %d is %c",j+1,postfix[j]);
	}
}

int precedence(char input)
{
	if(input=='(' || input==')' )
	{
		return 4;
	}
	else if(input=='^')
	{
		return 3;
	}
	else if(input=='*' || input=='/' )
	{
		return 2;
	}
	else if(input=='+' || input=='-' )
	{
		return 1;
	}
}

void operator(char *infix, char *stack, char *postfix, int i)
{
	int precedence_infix,precedence_stack,p;
	precedence_infix=precedence(infix[i]);
	precedence_stack=precedence(stack[j]);

	if(infix[i]=='(')
	{
		top++;
		stack[top]=infix[i];
	}
	else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^');
	{
		if(precedence_stack<precedence_infix)
		{
			addinfix_stack(infix,stack,i);
			return;
		}

		else if(precedence_stack>=precedence_infix)
		{
			p=precedence_stack;
			while(p>=precedence_infix)			//Normal case
			{
				addstack_postfix(stack,postfix);
				if(stack[top]=='('|| stack[top]==')')
				{
					break;
				}
				else
				{
					p=precedence(stack[top]);
				}
			}
			addinfix_stack(infix,stack,i);
		}
	}
	if(infix[i]==')')
	{
		while(stack[top]!='(')			//If ) is encountered
		{
			addstack_postfix(stack,postfix);
		}
	top--;
	}
}

void addinfix_stack(char *infix, char *stack, int i)
{
	top++;
	stack[top]=infix[i];
}

void addinfix_postfix(char *infix, char *postfix, int i)
{
	j++;
	postfix[j]=infix[i];
}

void addstack_postfix(char *stack, char* postfix)
{
	j++;
	postfix[j]=stack[top];
	top--;
}

void display(char *postfix)
{
	int i;
	c--;
	printf("\nTHE POSTFIX EXPRESSION IS:\n");
	for(i=0;i<c;i++)
	{
		printf(" %c",postfix[i]);
	}
}