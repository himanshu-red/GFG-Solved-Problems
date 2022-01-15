class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        Node *fast = head; 
        int count = 1; 
        while (fast->next != nullptr && fast ->next->next != nullptr )
        {
            fast  = fast->next->next; 
            count+=2; 
        }
        if (fast->next != nullptr)
            count++; 
            return count; 
    }
};
