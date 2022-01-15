// url -> https://practice.geeksforgeeks.org/problems/circular-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]Linked%20ListproblemStatusunsolveddifficulty[]-1page1category[]Linked%20List#
#include <set>
bool isCircular(Node *head)
{
   // Your code here
   set <Node *> nodes; 
   Node *temp = head; 
   while (temp->next != nullptr)
   {
        if (nodes.find(temp) == nodes.end()) nodes.insert(temp); 
        else  return true; 
        temp = temp->next; 
   }
   return false; 
}
