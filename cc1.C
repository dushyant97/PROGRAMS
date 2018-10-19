#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool keyword(char *s);
bool operators(char *s);
bool spec_character(char *s);

int key=0; int operatorss=0; int constants=0; int identifiers=0;int spec_char=0;
bool flag=false;

int main()
{
	int length,a,i,j;
	printf("\n Enter the characters in string \n");
//	scanf("%d",&a);
	a=5;
	char str[a][10],s[10];
/*	printf("\n Enter the string \n");
	for(i=0;i<a;i++)
	{
		gets(str[i]);
	}
*/	
	
	for(j=0;j<a;j++)	
	{
		flag=false;
		strcpy(s,str[i]);
		length=strlen(s);
		operators(s);
		keyword(s);
		spec_character(s);
		if(flag=true)
		{
		
			for(i=0;i<length;i++)
			{
				if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[0] == '5' ||  
        			s[i] == '6' || s[i] == '7' || s[i] == '8' ||  s[i] == '9')
				{
						constants++;
				}
				else if((s[i] >= 'a' && s[i<= 'z']) || (s[i] >= 'A' && s[i<= 'Z']))
				{
					identifiers++;
				}
			}
		}
	}
	printf("Number of keywords are %d \n",key);
	printf("Number of operators are %d \n",operatorss);
	printf("Number of constant are %d \n",constants);
	printf("Number of spec_char are %d \n",spec_char);
	printf("Number of identifier are %d \n",identifiers);
}

bool keyword(char *s)
{
if(strcmp(s,"auto")==0 || strcmp(s,"double")==0 || strcmp(s,"int")==0 || strcmp(s,"struct")==0 || strcmp(s,"break")==0||
strcmp(s,"else")==0 || strcmp(s,"long")==0 || strcmp(s,"switch")==0 || strcmp(s,"case")==0 || strcmp(s,"enum")==0
|| strcmp(s,"register")==0 || strcmp(s,"typedef")==0 || strcmp(s,"char")==0 || strcmp(s,"extern")==0 || strcmp(s,"return")==0
|| strcmp(s,"union")==0 || strcmp(s,"const")==0 || strcmp(s,"float")==0 || strcmp(s,"short")==0 || strcmp(s,"unsigned")==0
|| strcmp(s,"continue")==0 || strcmp(s,"for")==0 || strcmp(s,"signed")==0 || strcmp(s,"void")==0 || strcmp(s,"default")==0 ||
strcmp(s,"goto")==0 || strcmp(s,"sizeof")==0 || strcmp(s,"volatile")==0 || strcmp(s,"do")==0 || strcmp(s,"if")==0 ||
strcmp(s,"static")==0 || strcmp(s,"while")==0)
{
	key++;
	flag=true;
}
}

bool operators(char *s)
{
			if(strcmp(s,"+")==0 || strcmp(s,"-")==0 || strcmp(s,"*")==0 || strcmp(s,"/")==0 || strcmp(s,"^")==0||
		 strcmp(s,"=")==0)
		{
			operatorss++;
			flag=true;
		}
}

bool spec_character(char *s)
{
	if(strcmp(s,"!")==0 || strcmp(s,"#")==0 || strcmp(s,"$")==0 || strcmp(s,"%")==0 || strcmp(s,"()")==0||
		 strcmp(s,"")==0)
		{
			spec_char++;
			flag=true;
		}
}
