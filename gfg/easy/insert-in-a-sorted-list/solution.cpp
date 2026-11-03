/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        // code here
        Node *prev = NULL;
        Node *curr = head;
        
        Node *newNode = new Node(key);
        
        
        if(head->data>key){
            newNode->next = head;
            head =newNode;
            return head;
        }
        
        while(curr){
            
            if(key<curr->data){
                break;
            }
           
           
           prev =curr;
           curr=curr->next;
            
        }
        
        prev ->next = newNode;
        newNode->next = curr;
        
        
        return head;
        
    }
};