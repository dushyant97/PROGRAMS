typedef struct node * PTR;
typedef struct node NODE

struct node *reverse (struct node *head, int k)
{ 
  PTR current = head, next = NULL , prev = NULL;
  int count = 0;
  while(curr!=NULL && count<k)
  {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
      count++;
  }
  if(next!=NULL)
    head->next = reverse(next,k);
    
    return prev;
  
}
