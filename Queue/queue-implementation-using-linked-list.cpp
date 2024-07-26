#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};
class Queue{
    private:
        node *head;
        node *tail;
        int cs;
    public:
    Queue(){
        head = tail = NULL;
        cs = 0;
    }
    void push(int data){
        node* temp = new node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        cs++;
    }
    void pop(){
        if(head == NULL)
            return;
        node* temp = head;
        head = head->next;
        delete temp;
        cs--;
    }
    bool empty(){
        // return cs == 0;
        return head == NULL;
    }
    int front(){
        if(head == NULL)
            return -1;
        return head->data;
    }
    int size(){
        return cs;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front() << endl; // prints 1
    cout<<q.size()<<endl;

    while(!q.empty()) {
        cout<<q.front() << " "; 
        q.pop();
    }
    cout << endl; // prints an empty line

    
    cout << boolalpha << q.empty() << endl; // prints false
    return 0;
}