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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(head->next){
            v.push_back(head->val);
            head->val=0;
            head=head->next;
        }
        v.push_back(head->val);
        head->val=0;
        // head=head->next;
        head=temp;
        vector<int>v2;
        int n=v.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(i==j)
            {
                v2.push_back(v[i]);
                break;
            }
            v2.push_back(v[i]);
            v2.push_back(v[j]);
            i++;
            j--;
        }
        for(int p=0;p<v2.size();p++){
            head->val+=v2[p];
            head=head->next;
        }
        return;
    }
};