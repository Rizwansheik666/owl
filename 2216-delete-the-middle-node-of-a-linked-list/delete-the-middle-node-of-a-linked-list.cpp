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
    ListNode* deleteMiddle(ListNode* head) {
        vector<int>v;
        while(head->next){
            v.push_back(head->val);
            head=head->next;
        }
        v.push_back(head->val);
        int n=v.size();
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        ListNode* temp=new ListNode(v[0]);
        ListNode* ans=temp;
        if(n==1){
            return NULL;
        }
        else{
            for(int i=1;i<n;i++){
                if(i==n/2){
                    continue;
                }
                else{
                    temp->next=new ListNode(v[i]);
                    temp=temp->next;
                    
                }
            }
        }
        return ans;
    }
};