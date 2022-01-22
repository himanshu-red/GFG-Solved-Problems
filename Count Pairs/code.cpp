class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        Node *temp1 = head1; 
        Node *temp2 = head2; 
        set <int> s; 
        int count = 0; 
        while (temp1 != nullptr)
        {
            s.insert(temp1->data); 
            temp1 = temp1->next; 
        }
        while (temp2 != nullptr)
        {
            if (s.count(x - temp2->data) != 0) count++; 
            temp2 = temp2->next; 
        }        
        return count; 
    }
};
