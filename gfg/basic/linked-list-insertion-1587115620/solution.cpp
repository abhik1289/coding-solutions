/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *lastNode = new Node(x);
        
        Node *temp = head;
        
        if(head==NULL)
        return lastNode;
        
        if(!head->next)
        {
            head->next = lastNode;
            return head;
        }
        while(temp->next){
            temp = temp->next;
        }
        
        
        temp->next = lastNode;
        
        return head;
        
    }
};