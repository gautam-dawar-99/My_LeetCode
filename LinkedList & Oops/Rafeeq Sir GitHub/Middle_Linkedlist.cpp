#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data=data;
            next=NULL;
        }
};

// how to take linked list input from user
node* buildLinkedList(){
    node* head=NULL;
    node* tail=NULL;

    int data;
    cin>>data;
    while(data!=-1){
        if(head==NULL){
            node* n=new node(data);
            head=n;
            tail=n;
        }else{
            node* n=new node(data);
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
// to find length of LL
int length(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* MegerSortedList(node* head1,node* head2){
    node* dummy=new node(-1);
    node* ans=dummy;
    node* temp1=head1;
    node* temp2=head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<temp2->data){
            dummy->next=temp1;
            temp1=temp1->next;
            dummy=dummy->next;
        }else{
            dummy->next=temp2;
            temp2=temp2->next;
            dummy=dummy->next;
        }
    }
    while(temp1!=NULL){
        dummy->next=temp1;
        dummy=dummy->next;
        temp1=temp1->next;
    }

    while(temp2!=NULL){
        dummy->next=temp2;
        dummy=dummy->next;
        temp2=temp2->next;
    }
    //print(dummy);
    return ans->next;
}

node* MiddleLinkedList(node* head){
    // length find karne wali approach
    // int len=length(head);
    // int mid=(len-1)/2;
    // node* temp=head;
    // for(int i=0;i<mid;i++){
    //     temp=temp->next;
    // }
    // return temp;

    ////using Slow and Fast Pointers/hare and tortoise/ flyod algorithm
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}




int main(){
    node* head1=buildLinkedList();
    node* head2=buildLinkedList();
    print(head1);
    print(head2);
    node* mergedNode=MegerSortedList(head1,head2);
    print(mergedNode);








    // node* head=buildLinkedList();
    // print(head);
    // node* midNode=MiddleLinkedList(head);
    // if(midNode==NULL){
    //     cout<<"Middle doesn't exist"<<endl;
    // }else{
    //     cout<<"Middle node: "<<midNode->data<<endl;
    // }
    return 0;
}




































































