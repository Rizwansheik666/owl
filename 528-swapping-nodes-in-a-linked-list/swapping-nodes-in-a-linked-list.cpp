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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        // v.push_back(head->val);
        ListNode* temp=new ListNode();
        ListNode* ans=temp;
        int n=v.size();
        swap(v[k-1],v[n-k]);
        for(int i=0;i<n;i++){
            temp->next=new ListNode(v[i]);
            temp=temp->next;
            // cout<<v[i]<<" ";
        }
        return ans->next;
    }
};