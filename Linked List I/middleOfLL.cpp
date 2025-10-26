class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //Slow & fast pointers
        ListNode *slow = head , *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next; //+1
            fast = fast->next->next;//+2
        }
        return slow;


        //bruteforce
        // ListNode* temp = head;
        // int steps , count = 0 ;
        // while(temp){
        //     count++;
        //     temp = temp->next;
        // }
        // steps = count/2;
        // temp = head;
        // while(steps){
        //     temp = temp->next;
        //     steps--;
        // }
        // return temp;
    }
};
