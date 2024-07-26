// #include <iostream>
// using namespace std;
// ListNode* MergeLists(ListNode* head1,ListNode* head2){
//     ListNode* dummy = new ListNode(-1);
//     ListNode* result = dummy;

//     if (head1 == nullptr) return head2;
//     if (head2 == nullptr) return head1;
//     // sort the list and merge it together
//     ListNode* tmp1=head1;
//     ListNode* tmp2=head2;
//     while(tmp1!=nullptr && tmp2!=nullptr){
//         if(tmp1->val <= tmp2->val){
//             dummy->next = tmp1;
//             tmp1 = tmp1->next;
//         }else{
//             dummy->next = tmp2;
//             tmp2 = tmp2->next;
//         }
//         dummy = dummy->next;
//     }
//     while(tmp1!=NULL){
//         dummy->next = tmp1;
//         tmp1 = tmp1->next;
//         dummy = dummy->next;
//     }
//     while(tmp2!=NULL){
//         dummy->next = tmp2;
//         tmp2 = tmp2->next;
//         dummy = dummy->next;
//     }
//     return dummy->next;

// }
// int main() {

//     return 0;
// }

// Detect a cycle in LL


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;        
    }
};

bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next ==NULL){
            return false;
        }

        do{
            if(fast==nullptr || fast->next == nullptr){
                return false;
            }

            fast=fast->next->next;
            slow=slow->next;
            
        }while(slow!=fast);
        
        return true;
        
}

// Linked List Cycle II
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode * slow=head;
        ListNode * fast=head;

        if(head==NULL || head->next== NULL){
            return nullptr;
        }
        do{
            if(fast==NULL || fast->next==NULL){
                return nullptr;
            }
            slow=slow->next;
            fast=fast->next->next;

        }while(slow!=fast);
        
        slow=head;

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }

        return slow;
    }
};
        