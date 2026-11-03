# Linked List End Insertion

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given the  **head** of a Singly Linked List and a value  **x**, insert that value  **x** at the end of the LinkedList and return the  **head** of the modified Linked List.

 **Examples :** 

```
Input: x = 6,
   
Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6
Explanation: We can see that 6 is inserted at the end of the linkedlist.
   

```

```
Input: x = 1,
   
Output: 4 -> 5 -> 1
Explanation: We can see that 1 is inserted at the end of the linked list.
      

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T07:19:32.725Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1)