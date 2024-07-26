// Using the Vector

/*
#include <bits/stdc++.h>
using namespace std;
class Stack{
    private :
        vector<int> vec;
    public:
        // push
        void push(int x){
            vec.push_back(x);
            return ;
        }
        void pop(){
            if(vec.size()==0){
                cout<<"Stack is empty. Cannot pop."<<endl;
                cout<<"stack underflow."<<endl;
                return ;
            }
                vec.pop_back();
                return ;
        }
        int top(){
            if(vec.size()==0){
                cout<<"stack underflow_error"<<endl;
                return -1;
            }
            return vec[vec.size()-1];
        }
        bool isEmpty(){
            return vec.empty();
        }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element is: " << s.top() << endl;
    s.pop();

    if(s.isEmpty()==false){
        cout<<"stack is not empty"<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }

    while(s.isEmpty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}
*/

// Using Linked List

#include <bits/stdc++.h>
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
class Stack{
    private:
        node* head;
    public:
        Stack(){
            head = NULL;
        }
        void push(int data){
            node* n=new node(data);
            n->next=head;
            head=n;
        }
        int top(){
            if(head==NULL){
                cout<<"Stack is empty. Cannot get top."<<endl;
                return -1;
            }
            return head->data;

        }
        void pop(){
            if(head==NULL){
                cout<<"Stack is empty. Cannot pop."<<endl;
                return ;
            }
            node* temp=head;
            head=head->next;
            delete temp;
        }

        bool empty(){
            return (head==NULL);
        }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<s.top()<<endl;
    s.pop();

    while(s.empty()!=1){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    cout<<s.empty()<<endl;

    return 0;
}