#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        // node(int value) : data(value) {}

        node(int value) : data(value) , next(NULL){}
        
        
};

void InsertionAtMid(node* head,node* tail,int pos,int data){
    node* tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    node* n=new node(data);
    n->next=tmp->next;
    tmp->next=n;
}

void InsertionAtHead(node* &head,node* &tail,int data){
    if(head==NULL){
        node* n = new node(data);
        head=n;
        tail=n;
    }
    else{
        node* n= new node(data);
        n->next=head;
        head=n;
    }
}
void InsertionAtEnd(node* &head,node* &tail,int data){
        node* newNode= new node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        // node* newNode= new node(data);
        tail->next=newNode;
        tail=newNode;
    }
    return;
}
void print(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<"-->";
        tmp=tmp->next;
    }
    cout<<"NULL"<<endl ;
}
int main() {
    node* head=NULL;
    node* tail=NULL;

    InsertionAtEnd(head, tail, 1);
    print(head);

    InsertionAtEnd(head, tail, 2);
    print(head);

    InsertionAtEnd(head, tail, 3);
    print(head);

    InsertionAtHead(head, tail,6);
    print(head);

    InsertionAtHead(head, tail, 5);
    print(head);

    InsertionAtHead(head, tail, 4);
    print(head);

    InsertionAtMid(head,tail,3,20);
    print(head);


    return 0;
}