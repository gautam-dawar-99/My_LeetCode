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
void buildLinkedList(node* &head,node* &tail){
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
    // connecting tail to head for cycle.
    tail->next=head;
}

bool detectCycle(node* head){
    node* slow=head;
    node* fast=head;
    if(head==NULL || head->next==NULL){
        return false;
    }

    do{
        if(fast==NULL || fast->next==NULL)
            return false;
            
        // first move fast
        fast=fast->next->next;
        slow=slow->next;
    }while(slow!=fast);

    return true;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    buildLinkedList(head,tail);
    return 0;
}




































































