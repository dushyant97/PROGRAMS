typedef  SinglyLinkedListNode NODE;
typedef  SinglyLinkedListNode* PTR;

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    
    
    PTR current=head,next,prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
        head=prev; 
        return head;
}
