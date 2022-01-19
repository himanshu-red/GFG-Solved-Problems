class Solution {
public:
    int getSize(Node *start)
    {
        Node *temp = start; 
        int size = 1; 
        while (temp->next != nullptr && temp->next->next != nullptr)
        {
            temp = temp->next->next; 
            size += 2; 
        }
        if(temp->next != nullptr) size++; 
        return size; 
    }
    Node *update(Node *start,int p)
    {
        //Add your code here
        int size = getSize (start); 
        p %= size; 
        if (p != 0)
        {
            int count = 1; 
            Node *head = start;
            Node *temp = start; 
            while (count < p)
            {
                temp = temp->next; 
                count++; 
            }
            temp->next->prev = nullptr; 
            start = temp->next; 
            temp->next = nullptr; 
            temp = start; 
            while (temp->next != nullptr) temp = temp->next; 
            temp->next = head; 
            head->prev = temp; 
            return start; 
            
        }
        return start; 
    }
};
