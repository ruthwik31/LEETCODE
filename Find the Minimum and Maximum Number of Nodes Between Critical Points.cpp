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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int c=0;
        vector<int>res;
        vector<int>str;
        ListNode* currt=head;
        while(currt!=NULL){
            c++;
            currt=currt->next;
        }
        if(c==2){
            return {-1,-1};
        }
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* nex=curr->next;
        int i=0;
        while(nex!=NULL){
        i++;
        if(curr->val<prev->val && curr->val<nex->val){
            str.push_back(i+1);
            prev=curr;
            curr=nex;
            nex=nex->next;
        }
        else if(curr->val>prev->val && curr->val>nex->val){
            str.push_back(i+1);
            prev=curr;
            curr=nex;
            nex=nex->next;
        }
        else{
            prev=curr;
            curr=nex;
            nex=nex->next;
        }
        }
        sort(str.begin(),str.end());
        int s=str.size();
        if(s<2){
            return {-1,-1};
        }
        int min=abs(str[0]-str[1]);
        for(int i=2;i<s;i++){
            if(abs(str[i]-str[i-1])<min){
                min=abs(str[i]-str[i-1]);
            }
        }
        //res.push_back(min);
        //res.push_back(abs(str[s-1]-str[0]));
        return {min,abs(str[s-1]-str[0])};
    }
};
