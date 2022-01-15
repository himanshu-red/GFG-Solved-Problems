//  url -> https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]Linked%20ListproblemStatusunsolveddifficulty[]-1page1category[]Linked%20List#
class Solution
{
    public: 
    Node* deleteNode(Node *head_ref, int x)
    {
      Node *temp = head_ref; 
      int index = 1; 
      while (temp != nullptr)
      {
        //   printf ("%d %d\n", index, x);
          if (index == x)
          {
              if (temp == head_ref)
              {
                //   head_ref->next->prev = nullptr; 
                  head_ref = head_ref->next; 
                  head_ref->prev->next = nullptr; 
                  
              }
              else if (temp->next == nullptr)
              {
                  temp->prev->next = nullptr; 
                  temp->prev = nullptr; 
              }
              else 
              {
                  temp->prev->next = temp->next; 
                  temp->next->prev = temp->prev; 
              }
          }
          index++; 
          temp = temp->next; 
      }
      return head_ref; 
    }
};
