#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Top element is: " << st.top() << endl;
    st.pop();
    cout << "Top element after popping is: " << st.top() << endl;

    cout<<st.empty()<<endl;   // returns true if the stack is empty and returns false otherwise(if stack is not empty)

    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty || ";
        cout<<"Size of the stack is "<<st.size()<<endl;
    }

    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}