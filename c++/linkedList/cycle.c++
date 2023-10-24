class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*p=head;//slower
        ListNode*q=head;//faster
        while(q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next;
            q=q->next;
            if(p==q){
                return true;
    
            }
        }
        return false;


       
    }
};