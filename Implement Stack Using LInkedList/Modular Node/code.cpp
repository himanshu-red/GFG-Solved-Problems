int modularNode(Node* head, int k)
{
    int ret = -1; 
    int i = 0; 
    Node *temp = head; 
    while (temp != nullptr)
    {
        i++; 
        if (i % k == 0)
        {
            ret = temp->data; 
        }
        temp = temp->next; 
    }
    return ret; 
}
