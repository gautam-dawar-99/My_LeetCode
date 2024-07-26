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
        if (!head || !head->next)
            return head;
        // ListNode* dummy = new ListNode(-1);

        // ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr){
            swap(curr->data,curr->next->val);
            curr=curr->next->next;


            // prev ->next = curr->next;
            // curr->next=prev->next->next;
            // prev->next->next=curr;

            // prev=curr;
            // curr=curr->next;
        }
        // return dummy->next;
    }
};