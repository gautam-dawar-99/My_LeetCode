#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        // node(int value) : data(value) {}

        node(int value) : data(value) , next(NULL){}
        
        
};
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
    return 0;
}