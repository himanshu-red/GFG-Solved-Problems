bool areIdentical(struct Node *head1, struct Node *head2)
{
    if (head1->data != head2->data) return false; 
    Node *t1 = head1; 
    Node *t2 = head2; 
   
    while (t1->next != nullptr && t2->next != nullptr)
    {
        if (t1->data != t2->data) return false; 
        t1 = t1->next; 
        t2 = t2->next; 
    }
    if (t1->next != nullptr || t2->next != nullptr) return false; 
    return true; 
}
