/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;  
        ListNode *temp=new ListNode(0);
        ListNode *newn=temp;
        /*ListNode *temp11=l2;
        int c=0;
        while(temp1!=NULL){
            c=c+1;
            temp1=temp1->next;
        }
        int c1=0;
        while(temp11!=NULL){
            c1=c1+1;
            temp11=temp11->next;
        }
        int maxlength=max(c,c1);*/
        int carry=0;
        while(l1!=NULL ||l2!=NULL|| carry >0){
            int sum=carry;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            int x=(sum)%10;
            newn->val=x;
            carry=sum/10;
            if(l1!=NULL ||l2!=NULL|| carry>0){
                newn->next=new ListNode(0);
                newn=newn->next;
            }
        }
        return temp;
    }
};
