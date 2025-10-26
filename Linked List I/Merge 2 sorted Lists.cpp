class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode(0) , *tail = head;
        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
                tail = tail->next;
                tail->next =NULL;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
                tail = tail->next;
                tail->next =NULL;
            }
        }
        if(list1){
            tail->next = list1;
        }
        else{
            tail->next = list2;
        }
        tail = head;
        head = head->next ;
        delete tail;


        return head;


    }
};
