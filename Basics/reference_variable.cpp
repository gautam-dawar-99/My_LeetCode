#include <iostream>
using namespace std;
// Pass by value 
void update1(int n){
    n++;
}
// pass by reference -> use & operator
void update2(int& n){
    n++;
}
//  constant reference
void update3(const int& n){
    n=n+1;
}
int main() {
    int n1=10;
    update1(n1);
    cout<<n1<<endl;

    int n2=20;
    update2(n2);
    cout<<n2<<endl;

    int n3=30;
    update3(n3);
    cout<<n3<<endl;

    return 0;
}
