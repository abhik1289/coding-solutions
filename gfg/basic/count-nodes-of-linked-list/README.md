# Length of Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a singly linked list. Find the length of the linked list, where length is defined as the number of nodes in the linked list.

 **Examples :** 

```
Input: head: 1 -> 2 -> 3 -> 4 -> 5

Output: 5
Explanation: Length of the linked list is 5, as there are 5 nodes present in it.

```

```
Input: head: 2 -> 4 -> 6 -> 7 -> 5 -> 1 -> 0
 
Output: 7
Explanation: Length of the linked list is 7, as there are 7 nodes present in it.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T07:20:25.884Z  

```cpp
/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count = 0;
        Node *temp = head;
        
        
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1)