class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        ListNode* temp=head;
        ListNode* p=head->next;
        while(p!=NULL){
            int x=0;
            while(p->val!=0){
                x+=p->val;
                p=p->next;
            }
            p->val=x;
            temp->next=p;
            temp=p;
            p=p->next;
        }
        return head->next;
    }
};
