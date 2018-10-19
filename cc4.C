// considering epsilon as #

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>

int main(){
	int a,i,j,k,x,n,index,length,len,leng;
	char non_terminal;
	bool flag = false;
	printf("Enter the number of productions which would you like to enter\n");
	scanf("%d",&a);
	char first[a][1], str [a][100], s[a][1], follow[a][100];
	
	//Taking input
	for(i=0;i<a;i++)
	{	
		printf("Enter input for for left side of production\n");
		scanf("%s",s[i]);
   		printf("Enter input for right side of production\n");
		scanf("%s",str[i]);
	}

	//printing
		for(i=0;i<a;i++)
	{			
		printf("\n%c -> %s\n",s[i][0],str[i]);
	}
	
	// FIRST
	
	for(i=0;i<a;i++)
	{	
		n=strlen(str[i]);
		if(str[i][0] == '#')				
				{	
					first[i][0] = '#';				
					printf("\n First of %c is %c \n",s[i][n-1],first[i][0]);
				}
		if(str[i][0] >='a' && str[i][0]<='z')				
				{	
					first[i][0] = str[i][0];				
					printf("\n First of %c is %c \n",s[i][n-1],first[i][0]);
				}
		if(str[i][0] >= 'A' && str[i][0] <= 'Z')
		{
			
			x=0;
			non_terminal=str[i][x];
			ITERATION:
				{
					flag=false;
					for(j=0;j<a;j++)
					{
						if(s[j][0]==non_terminal)
						{													// finding index value
							index=j;
						}
					}
					for(j=0;j<a;j++)
					{
						if(first[index][j]=='#')
						{
							flag=true;
						}
					}
					len=strlen(s[i]);
					for(j=0;j<100;j++)
					{
						if(first[index][j] == '#')
						{	
							continue;
						}
						first[i][len]=first[index][j];
					}
					if(flag==true)
					{	
						leng=strlen(str[i]) - 1;
						if(x==leng)
						{
							break;
						}
						else
						{
							x++;
							non_terminal=str[i][x];
							goto ITERATION;
						}
					}
				}
			length=strlen(s[index]);
			printf("\n First of %c :",s[i][0]);
			puts(first[i]);
			break;			
			}
			
		}		
	}


	
