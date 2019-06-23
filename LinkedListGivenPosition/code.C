void addition_given(PTR head)
{
	int input,pos,count=0;
	printf("Enter the data\n");
	scanf("%d",&input);
	printf("Enter the position\n");
	scanf("%d",&pos);
	PTR a = (PTR)malloc(sizeof(NODE));
	PTR itr = head;
	while(count!=pos-1)
	{
		itr=itr->next;
		count++;
	}
	a->data=input;
	a->next=itr->next;
	itr->next=a;
	printf("added successfully\n");
}
