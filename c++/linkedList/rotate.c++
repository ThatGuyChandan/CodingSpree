
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        for(int i=0;i<k;i++){
            ListNode*r=head;
            ListNode*q=head;
            ListNode*p=head->next;
            while(p->next!=NULL){
                p=p->next;
                q=q->next;
            }
            q->next=NULL;
            p->next=r;
            head=p;
        }
        return head;
    }
};