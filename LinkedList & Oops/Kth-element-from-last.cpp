#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
            data = d;
            next = NULL;
        }
};
node* buildLinkedList(){
    node* head=nullptr;
    node* tail=nullptr;

    int value;
    cin>> value;
    while(value!=-1){
        
        node* newNode=new node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next = newNode;
            tail=newNode;
        }
        cin>>value;
        // if(value==-1){
        //     break;
        // }
    }
    return head;
}
node* reverse(node* head){
    if(!head || head->next==nullptr){
        return head;
    }
    node* prev=nullptr;
    node*curr=head;
    node* nxt = nullptr;
    while(curr!=nullptr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}
int length(node* node){
    int len=0;
    while(node!=nullptr){
        len++;
        node=node->next;
    }
    return len;
}
void display(node* tmp){
    while(tmp!=nullptr){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

node* kth_from_last(node* head,int k){
    node*tmp=head;
    int len=length(tmp);
    cout<<"Length of Linked List : "<<len<<endl;

    int pos=len-k;
    for(int i=0;i<pos;i++){
        tmp=tmp->next;
    }
    return tmp;
}
int main(){
    node* head=buildLinkedList();
    cout<<"Original Linked List: ";
    display(head);

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    node* kth_last=kth_from_last(head,k);
    cout<<"Kth element from last: "<<kth_last->data<<endl;

    return 0;
}