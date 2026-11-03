# Check if  Linked List is Circular

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **head**  of a singly linked list, returns  **true** if the linked list is circular &  **false** if it is not circular. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. 

 **Note:**  Linked list should not contain any inner loop and a empty linked list is always a circular linked list.

 **Examples:** 

```
Input: head = [2, 4, 6, 7, 5]

Output: true
Explanation: As shown in figure the first and last node is connected, i.e. 5 --> 2

```

```
Input: head = [2, 4, 6, 7, 5, 1]
 
Output: false
Explanation: As shown in figure this is not a circular linked list.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T07:22:33.075Z  

```cpp
/* Linked List Node Structure
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	bool isCircular(Node *head) {
		// code here
		
		Node *s = head;
		Node *f = head;
		
		while (f && f->next) {
			s = s->next;
			f = f->next->next;
			
			if (s == f) {
				return true;
			}
			
		}
		return false;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/circular-linked-list/1)