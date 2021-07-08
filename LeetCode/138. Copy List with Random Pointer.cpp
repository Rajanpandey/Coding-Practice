/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> myMap;

        Node* ptr = head;
        while (ptr) {
            myMap[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }
        
        ptr = head;
        while (ptr) {
            myMap[ptr]->next = myMap[ptr->next];
            myMap[ptr]->random = myMap[ptr->random];
            ptr = ptr->next;
        }
        
        return myMap[head];
    }
};
