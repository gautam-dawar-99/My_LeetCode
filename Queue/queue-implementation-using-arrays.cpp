#include<bits/stdc++.h>
using namespace std;
class Queue{
    private :
        int front;
        int end;
        int cs;
        int *arr;
        int n;
        
    public:
        Queue(int size){
            front = 0;
            end = size-1;
            cs = 0;
            n = size;
            arr = new int[n];
        }
        void push(int value){
            if(cs>n){
                cout << "Queue is full\n";
                return;
            }
            end = (end+1)%n;
            arr[end] = value;
            cs++;
        }
        int pop(){
            if(cs==0){
                cout << "Queue is empty\n";
                return -1;
            }
            int temp = arr[front];
            front = (front+1)%n;
            cs--;
            return temp;
        }
        int front_(){
            if(cs==0){
                cout << "Queue is empty\n";
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            return cs==0;
        }
        int size(){
            return cs;
        }

};
int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl;

    while(!q.empty()){
        cout<<q.front_()<<" ";
        q.pop();
    }
    return 0;
}