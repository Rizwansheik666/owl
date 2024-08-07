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
 static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:


    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head->next;
        ListNode* prev = head; 
        int sum = 0;

        while (curr != NULL) {
            if (curr->val == 0) {
                prev->next = new ListNode(sum);
                prev = prev->next;
                sum = 0;
            } else {
                sum += curr->val;
            }
            curr = curr->next; 
        }

        prev->next = NULL;

        return head->next;
    }
};