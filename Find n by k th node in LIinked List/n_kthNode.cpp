
int getVal (struct Node *head, int index)
{
    int count = 1; 
    Node *temp = head; 
    while (count != index)
    {
        temp = temp->next; 
        count++; 
    }
    return temp->data; 
    
}
int fractional_node(struct Node *head, int k)
{
    if (head->next == nullptr)
        return head->data; 
        
    int size = 1; 
    int result; 
    Node *slow = head; 
    Node *fast = head; 
    
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        fast = fast->next->next; 
        slow = slow->next; 
        size+=2; 
    }
    
    if (fast->next != nullptr)
    {
        size+=1; 
        slow = slow->next;
    }
    
    int index = ceil(size/(float)k); 
    int slowPos = (size/2)+1; 
    
    if (index >= slowPos)
    {
        index = index - slowPos; 
        result = getVal(slow, index+1); 
    }
    else 
    {
        result = getVal(head, index); 
    }
    return result; 
    
}
