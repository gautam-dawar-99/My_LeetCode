#include <iostream>
using namespace std;
class ListNode{
	public:
		int val;
		ListNode* next;
		ListNode(int d){
			val=d;
			next=nullptr;
		}
};
ListNode* buildLinkedList(int n) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    while (n--) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
ListNode* MergeLists(ListNode* head1,ListNode* head2){
    ListNode* dummy = new ListNode(-1);
    ListNode* result = dummy;

    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;
    // sort the list and merge it together
    ListNode* tmp1=head1;
    ListNode* tmp2=head2;
    while(tmp1!=nullptr && tmp2!=nullptr){
        if(tmp1->val <= tmp2->val){
            dummy->next = tmp1;
            tmp1 = tmp1->next;
        }else{
            dummy->next = tmp2;
            tmp2 = tmp2->next;
        }
        dummy = dummy->next;
    }
    while(tmp1!=NULL){
        dummy->next = tmp1;
        tmp1 = tmp1->next;
        dummy = dummy->next;
    }
    while(tmp2!=NULL){
        dummy->next = tmp2;
        tmp2 = tmp2->next;
        dummy = dummy->next;
    }
    return result->next;
}

void print(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ListNode* l1=buildLinkedList(n);
		int m;
		cin>>m;
		ListNode* l2=buildLinkedList(m);

		ListNode* merged_head=MergeLists(l1,l2);
		print(merged_head);
	}
    return 0;
}