#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node* insertion(){
    int value;
    // cout << "Enter the value to insert: ";
    cin >> value;
    node* head = nullptr;
    node* tail = nullptr;
    while(value >0){
        node* newNode = new node(value);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        // cout << "Enter the value to insert (-1 to stop): ";
        cin >> value;
    }
    return head;
}
void print(node* head){
    node* tmp=head;
    while(tmp!=nullptr){
        cout<<tmp->data<<"-->";
        tmp=tmp->next;
    }
    cout<<"null"<<endl;
}
int main() {
    // Insertion in a linked list
    // 1-->2-->3-->null
    node* head = insertion() ;
    print(head);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// };
// int main() {
//     node a;
//     a.data = 5;
//     a.next=NULL;

//     node b;
//     b.data = 15;
//     b.next=NULL;

//     // a-->b

//     a.next = &b;

//     cout<<a.data<<"-->"<<((*a.next).data)<<"-->NULL"<<endl;

//     node c= *(a.next);
//     cout<<c.data<<endl;

//     cout<<a.data<<"-->"<<a.next->data<<"-->NULL";

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// };
// int main() {
//     node a;
//     a.data = 1;
//     a.next=NULL;

//     node b;
//     b.data = 2;
//     b.next=NULL;

//     // a-->b

//     a.next = &b;

//     node c;
//     c.data = 3;
//     c.next=NULL;

//     b.next = &c;

//     cout<<a.data<<"-->"<<((*a.next).data)<<"-->"<<((a.next->next)->data)<<"-->NULL"<<endl;
//     return 0;
// }
