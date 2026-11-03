# Identical Linked Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two singly linked lists,  **head1**  and  **head2**, the task is to determine whether the two linked lists are identical.

Two linked lists are considered identical if they have the same number of nodes and each corresponding node contains the same data in the same order.

 **Examples:** 

```
Input: head1: 1->2->3->4->5->6, head2: 99->59->42->20
Output: false
Explanation: As shown in the below figure, the two lists are not identical.

```

```
Input: head1: 1->2->3->4->5, head2: 1->2->3->4->5
Output: true
Explanation: As shown in the below figure, the two lists are identical.
 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T07:32:01.292Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/identical-linked-lists/1)