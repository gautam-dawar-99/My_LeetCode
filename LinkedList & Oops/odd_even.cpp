#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int x){
			data=x;
			next=nullptr;
		}
};
node* buildLinkedList(int n){
	node* head=nullptr;
	node* tail=nullptr;
	while(n--){
		int val;
		cin>>val;
		node* n=new node(val);
		if(head==NULL){
			head=tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}
	}
	return head;
}
void print(node* h){
	while(h!=nullptr){
		cout<<h->data<<" ";
		h=h->next;
	}
}
node* arrange_odd_even(node* head){
	if(head == nullptr) return nullptr;
	// node* dummy=new node(-1);
	node* h=head;
	node* t=head;
	node* dummy_odd=new node(-1);
	node* dummy_even=new node(-1);
	node* dummy=dummy_odd;
	node* dummy_e=dummy_even;

	while(t!=nullptr){
		if(t->data%2==1){
			dummy_odd->next=t;
			t=t->next;
			dummy_odd=dummy_odd->next;
		}
		else{
			dummy_even->next=t;
			t=t->next;
			dummy_even=dummy_even->next;
		}
	}
    dummy_even->next=nullptr;
    dummy_e=dummy_e->next;

	while(dummy_e!=nullptr){
		dummy_odd->next=dummy_e;
		dummy_odd=dummy_odd->next;
		dummy_e=dummy_e->next;
	}

	return dummy->next;
}
int main() {
	int n;
	cin>>n;
	node* head=buildLinkedList(n);
	node* ans=arrange_odd_even(head);
	print(head);


	return 0;
}