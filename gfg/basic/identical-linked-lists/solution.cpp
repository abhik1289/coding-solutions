/* Strucutre of a Node in linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node *p1 = head1;
        Node *p2 = head2;
        int c1=0,c2=0;
        while(p1){
            c1++;
            p1 = p1->next;
        }
        
        while(p2){
            c2++;
            p2 = p2->next;
        }
        p1 = head1;
        p2 = head2;
        
        while(p1 && p2){
            
            if(p1->data != p2->data)
            return false;
            
            p1 = p1->next;
            p2 = p2->next;
            c1--;
            c2--;
        }
        return c1==c2;
    }
};