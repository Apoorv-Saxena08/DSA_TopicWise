struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Solution {
public:
    bool searchKey(Node* head, int key) {
        if (head == nullptr) return false;          
        if (head->data == key) return true;         
        return searchKey(head->next, key);          // recursive call
    }
};
