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
        vector<int>v;
        int prev=0,idx=1;
        while(head->next){
            if(prev==0){
                prev=head->val;
                head=head->next;
                idx++;
                continue;
            }
            else{
                if(head->next!=NULL){
                    if(head->val<prev and head->next->val>head->val){
                        v.push_back(idx);
                    }
                    else if(head->val>prev and head->next->val<head->val){
                        v.push_back(idx);   
                    }
                }
                idx++;
                prev=head->val;
                head=head->next;
            }
        }
        int n=v.size();
        if(n==2){
            return {abs(v[0]-v[1]),abs(v[0]-v[1])};
        }
        else if(n>2){
            int minDis=INT_MAX;
            for(int i=1;i<v.size();i++){
                minDis=min(minDis,v[i]-v[i-1]);
            }
            return {minDis,v[n-1]-v.front()};
        }
        return {-1,-1};
    }
};