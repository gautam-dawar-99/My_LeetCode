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

//////INSERTION IN LINKEDLIST///////////////////////////
void InsertionAtEnd(node* &head,node* &tail,int data){
    //1-->2-->null
    if(head==NULL){
        node* n=new node(data);// n=100
        head=n;
        tail=n;
    }else{
        node* n=new node(data);// n=200
        tail->next=n;
        tail=n;
    }
}


void InsertionAtMid(node* head,node* tail,int pos,int data){
    node* temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    node* n=new node(data);
    n->next=temp->next;
    temp->next=n;
}


void InsertionAtFront(node* &head,node* &tail,int data){
    if(head==NULL){
        node* n=new node(data);
        head=tail=n;
    }else{
        node* n=new node(data);
        n->next=head;
        head=n;
    }
}



//////INSERTION IN LINKEDLIST///////////////////////////

/////////////////Deletion in LinkedList/////////////////////////
void DeletionAtFront(node* &head,node* &tail){
    if(head==NULL){
        cout<<"Kya tapleek hai"<<endl;
        return ;
    }
    else if(head->next==NULL){
        delete head;
        tail=NULL;
        head=NULL;
    }else{
        node* temp=head;
        head=head->next;
        delete temp;
    }
}

void DeletionAtEnd(node* &head,node* &tail){
    if(head==NULL){
        cout<<"Kya tapleek hai"<<endl;
        return ;
    }
    else if(head->next==NULL){
        delete head;
        tail=NULL;
        head=NULL;
    }else{
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
}

int length(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void DeletionAtMid(node* &head,node* &tail,int pos){
    int len=length(head);
    if(pos==0){
        DeletionAtFront(head,tail);
    }else if(pos>=len-1){
        DeletionAtEnd(head,tail);
    }else{
        node* temp=head;    
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        node* n=temp->next;
        temp->next=n->next;
        delete n;
    }
}


/////////////////Deletion in LinkedList/////////////////////////

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
// i want to return the head of reversed linkedlist;
node* reverseLL(node* head){
    node* prev=NULL;
    node* curr=head;
    node* nxt=curr->next;

    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    return prev;

}

int main(){
    node* head=NULL;
    node* tail=NULL;
    InsertionAtEnd(head,tail,1);
    InsertionAtEnd(head,tail,2);
    InsertionAtEnd(head,tail,3);
    InsertionAtFront(head,tail,4);
    InsertionAtFront(head,tail,5);
    InsertionAtFront(head,tail,6);
    InsertionAtMid(head,tail,2,20);
    print(head);
    DeletionAtFront(head,tail);
    print(head);
    DeletionAtEnd(head,tail);
    print(head);
    DeletionAtMid(head,tail,2);
    print(head);
    // temp me reversed likedlist ka head hai
    node* temp= reverseLL(head);
    print(temp);



    // node a;
    // a.data=1;
    // a.next=NULL;

    // node b;
    // b.data=2;
    // b.next=NULL;

    // node c;
    // c.data=3;
    // c.next=NULL;

    // // a-->b--c-->null
    // a.next=&b;
    // b.next=&c;


    // cout<<a.data<<"-->"<<(a.next)->data<<"-->"<<(a.next)->next->data<<"-->null"<<endl;
    ////////// OR/////////////////////////
    //cout<<a.data<<"-->"<<(*a.next).data<<"-->NULL"<<endl;
    return 0;
}












































































