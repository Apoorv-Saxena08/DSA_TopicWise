class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL){
            return head;
        }
        //counting nodes
        int count = 0;
        ListNode*temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        k = k % count;
        if(k==0){
            return head;
        }


        int steps = count -k;
        ListNode *prev = NULL ,*curr = head;
        //making curr to end
        while(steps--){
            prev = curr;
            curr = curr->next;
        }


        prev->next = NULL;//disjoint


        ListNode* tail = curr;
        while(tail->next != NULL){
            tail = tail->next;
        }


        tail->next = head;
        head = curr;


        return head;
    }
};
