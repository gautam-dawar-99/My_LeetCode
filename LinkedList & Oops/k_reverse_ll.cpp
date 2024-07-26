#include <bits/stdc++.h>
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
ListNode* reverse_k_times(ListNode* head ,int k){
	ListNode* prev=nullptr;
	ListNode* curr=head;
	ListNode* next=curr->next;
    int cnt=0;


	while(curr!=nullptr && cnt<k){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
        cnt++;
	}
    if(next!=nullptr)
        head->next=reverse_k_times(next,k);

	return prev;

}
void print(ListNode* h){
	while(h!=nullptr){
		cout<<h->val<<" ";
		h=h->next;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	ListNode* head=buildLinkedList(n);
	for(int i=0;i<k;i++){
		 head= reverse_k_times(head,k);
	}
	print(head);


	return 0;
}
