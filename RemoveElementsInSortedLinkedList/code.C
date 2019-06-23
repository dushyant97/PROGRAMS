SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    PTR itr=head;
    while(itr->next!=NULL)
    {
       
        if(itr->data == itr->next->data)
        {
            itr->next=itr->next->next;
            continue;
            
        }
         itr=itr->next;
    }
    return head;
}
