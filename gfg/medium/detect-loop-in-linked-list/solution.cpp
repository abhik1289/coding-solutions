/* Linked List Node Structure
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node *s= head, *f = head;
        
        
        while(f && f->next){
            s= s->next;
            f = f->next->next;
            
            if(s==f)
            return true;
            
        }
        
        return false;
        
    }
};