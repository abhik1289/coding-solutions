# Insert in Sorted List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a linked list sorted in ascending order and an integer called  **key**, insert data in the linked list such that the list remains sorted.

 **Examples:** 

```
Input: list[] = [25, 36, 47, 58, 69, 80], key = 19

Output: [19, 25, 36, 47, 58, 69, 80]

Explanation: After inserting 19 the sorted linked list will look like the one in the output.
```

```
Input: list[] = [50, 100], key = 75

Output: [50, 75, 100]

Explanation: After inserting 75 the sorted linked list will look like the one in the output.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T07:42:14.083Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1)