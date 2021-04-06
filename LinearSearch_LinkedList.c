struct node *LinearSearch_LinkedList(struct node *head,int target)
{
    if(head)
    {
        while(head)
        {
            if(head->data == target)
            {
                return head;
            }
            head=head->next;
        }
    }
    return head;
}