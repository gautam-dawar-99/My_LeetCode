#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
Node* sum_of_linked_lists(Node* h1, Node* h2){
  Node* first = reverseList(h1);
    Node* second = reverseList(h2);
    Node* result = nullptr;
    Node* current = nullptr;
    int carry=0;

    while(first!=nullptr || second!=nullptr){
        int sum = carry + (first? first->data : 0) + (second? second->data : 0);
        carry = sum / 10;
        sum = sum % 10;

        Node* newNode = new Node(sum);
        if(result==nullptr){
            result=newNode;
            current=result;
        }else{
            current->next=newNode;
            current=newNode;
        }
        if(first) first=first->next;
        if(second) second=second->next;
    }
    if(carry>0){
        Node* newNode = new Node(carry);
        current->next=newNode;
        current=newNode;
    }
    result = reverseList(result);
    return result;


}
Node* buildLinkedList(int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    while (n--) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



int main() {
    int n, m;
    cin >> n >> m;

    Node* l1 = buildLinkedList(n);
    Node* l2 = buildLinkedList(m);

    Node* result = sum_of_linked_lists(l1, l2);
    print(result);

    return 0;
}

// Node* addLists(Node* l1, Node* l2, int& carry) {
//     if (l1 == nullptr && l2 == nullptr && carry == 0) {
//         return nullptr;
//     }

//     int sum = carry;
//     if (l1 != nullptr) {
//         sum += l1->data;
//         l1 = l1->next;
//     }
//     if (l2 != nullptr) {
//         sum += l2->data;
//         l2 = l2->next;
//     }

//     carry = sum / 10;
//     Node* result = new Node(sum % 10);
//     result->next = addLists(l1, l2, carry);

//     return result;
// }

// Node* addTwoLists(Node* l1, Node* l2) {
//     l1 = reverseList(l1);
//     l2 = reverseList(l2);

//     int carry = 0;
//     Node* result = addLists(l1, l2, carry);

//     if (carry > 0) {
//         Node* carryNode = new Node(carry);
//         carryNode->next = result;
//         result = carryNode;
//     }

//     result = reverseList(result);
//     return result;
// }