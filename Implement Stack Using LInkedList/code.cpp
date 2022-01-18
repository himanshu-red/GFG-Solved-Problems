void MyStack ::push(int x) 
{
    StackNode *newNode = new StackNode (x); 
    if (top == nullptr)
    {
        top = newNode; 
    }
    else 
    {
        StackNode *temp = top; 
        while (temp ->next != nullptr)
        {
             temp = temp->next;    
        }
        temp->next =  newNode; 
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    int topVal = -1;
    if (top == nullptr) return topVal; 
    if (top->next == nullptr)
    {
        topVal = top->data; 
        top = nullptr; 
    }
    else 
    {
        StackNode *temp = top;
        while (temp->next->next != nullptr) temp = temp->next; 
        topVal = temp->next->data; 
        temp->next = nullptr; 
    }
    return topVal; 
}
