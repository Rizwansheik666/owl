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
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head->next){
            if(head->val==1){
                s+='1';
                head=head->next;
            }
            else{
                s+='0';
                head=head->next;
            }
        }
        if(head->val==1){
                s+='1';
                head=head->next;
            }
            else{
                s+='0';
                head=head->next;
            }
        // cout<<s<<" ";
         int ans = 0;
        for(int i=0;i<s.size();i++){
            ans = ans*2 + (s[i]-'0');
            }
            return ans;
        }
};