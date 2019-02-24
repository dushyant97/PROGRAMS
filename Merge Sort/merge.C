#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void merge_sort(int a[], int l ,int h);
void print(int a[], int n);
void sort(int a[],int l,int m,int h);

int main()
{
	fflush(stdin);
	int n,*a=NULL;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	a= (int*) calloc (n, sizeof(int));
	printf("Enter the list\n");
	for (int i=0;i<n;i++ )
	{
		scanf("%d",&a[i]);	
	}
	if(a == NULL)
    {
        printf("Dynamic Allocation failed");
        exit(0);
    }
	printf("\nThe unsorted list is:\n");
	print(a,n);
	merge_sort(a,0,(n-1));
	printf("\nThe sorted list is:\n");
	print(a,n);
	free(a);
}

void merge_sort(int a[], int l ,int h)
{
	int m;
		if(l<h)
		{
			m=(l+h-1)/2;
			merge_sort(a,l,m);
			merge_sort(a,m+1,h);
			sort(a,l,m,h);			
		}
}

void sort(int a[],int l,int m,int h)
{
	int i,j,k;
	int len1= m-l+1;
	int len2=h-m;
	
	int L[len1];
	int R[len2];
	
	for(i=0;i<len1;i++)
	{
		L[i]=a[l+i];
	}
	for(j=0;j<len2;j++)
	{
		R[j]=a[m+1+j];
	}
	
	i=0,j=0,k=l;

	while(i<len1 && j<len2)
	{
		if(L[i] <= R[j] )
		{
			a[k]=L[i];
			i++;	
		}	
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<len1)
	{
		a[k]=L[i];
		k++;
		i++;
	}
	
	while(j<len2)
	{
		a[k]=R[j];
		k++;  
		j++;
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" %d \t",a[i]);
	}
}
