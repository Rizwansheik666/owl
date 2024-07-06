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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* curr=temp;
        while(curr->next!=NULL and curr->next->next!=NULL){
            ListNode* first=curr->next;
            ListNode* sec=curr->next->next;

            first->next=sec->next;
            sec->next=first;
            curr->next=sec;
            curr=first;
        }
        ListNode* Nhead=temp->next;
        delete temp;
       
        return Nhead;
    }
};