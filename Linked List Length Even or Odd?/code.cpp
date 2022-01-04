int isLengthEvenOrOdd(struct Node* head)
{
     Node *fast = head; 
     int count = 1; 
     while (fast -> next != nullptr && fast -> next -> next != nullptr)
     {
         fast = fast->next -> next; 
         count += 2; 
     }
     if (fast -> next != nullptr)
        count += 1;
        
    return (count % 2) ? (1) : (0);  // returns 1 and 0 for odd and even respectively
}
