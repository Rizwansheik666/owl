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
    ListNode* removeElements(ListNode* head, int v) {
        ListNode* temp=new ListNode();
        ListNode* ans=temp;
        while(head!=NULL){
            if(head->val!=v){
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
            head=head->next;
        }
        return ans->next;
    }
};