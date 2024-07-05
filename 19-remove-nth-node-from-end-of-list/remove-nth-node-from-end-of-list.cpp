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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>v;
        while(head->next){
            v.push_back(head->val);
            head=head->next;
        }
        v.push_back(head->val);
        ListNode* temp=new ListNode();
        ListNode* ans=temp;
        if(v.size()==1 and n==1)return ans->next;
        v.erase(v.begin()+v.size()-n);
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            if(i==v.size()-1)temp->next=NULL;
            else{
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        return ans;
    }
};