class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
       
        ListNode *curr =head->next , *prev = head;
       
        while(curr){
            if(curr->val == prev->val){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head ;
    }
};
