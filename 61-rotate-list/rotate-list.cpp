
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0){
            return head;
        }
        ListNode*curr=head;
        int length=1;
        while(curr->next){
            curr=curr->next;
            length++;
        }
        k%=length;
        if(k==0){
            return head;
        }
        curr->next=head;
        int steps=length-k;
        ListNode* newcurr=head;
        for(int i=1;i<steps;i++){
            newcurr=newcurr->next;
        }
        ListNode* newhead=newcurr->next;
        newcurr->next=NULL;
        return newhead;
    }
};