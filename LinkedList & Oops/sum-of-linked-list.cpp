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
node* buildLinkedList(int n){
    node* head=nullptr;
    node* tail=nullptr;

    int value;
    cin>> value;
    while(n!=0){
        
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
        n--;
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

node* sum(node* r1,node* r2){
    node* dummy = new node(-1);
    node* result = dummy;
    int carry = 0;
    while(r1 !=nullptr || r2 !=nullptr){
        int sum = carry;
        if(r1!= nullptr){
            sum += r1->data;
            r1 = r1->next;
        }
        if(r2!= nullptr){
            sum += r2->data;
            r2 = r2->next;
        }
        carry = sum / 10;
        result->next = new node(sum % 10);
        result = result->next;
    }
    return dummy->next;
}
int main(){
    int x;
    int y;
    cin>>x>>y;
    node* root1=buildLinkedList(x);
    node* root2=buildLinkedList(y);
    
    cout<<"First Linked List: ";
    cout<<endl;
    display(root1);
    cout<<endl;

    cout<<"Second Linked List: ";
    cout<<endl;
    display(root2);
    cout<<endl;

    node* head1=reverse(root1);
    cout<<endl;
    display(head1);
    cout<<endl;

    node* head2=reverse(root2);
    cout<<endl;
    display(head2);
    cout<<endl;

    node* sumList=sum(head1,head2);
    node* head=reverse(sumList);
    display(head);
    
   

    return 0;
}