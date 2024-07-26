#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d) {
            data = d;
            next = NULL;
        }
};
int main() {
    // To convert array to linkedlist
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    node* head = NULL;
    node* tail = NULL;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        node* newNode = new node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    node * tmp=head;
    while(tmp!=nullptr){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }

    // to convert LL to Array
    vector<int> array;
    tmp = head;
    while(tmp!=nullptr){
        array.push_back(tmp->data);
        tmp=tmp->next;
    }
    cout<<"\n";

    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
