#include <bits/stdc++.h>
using namespace std;
void prime_factor(int num){
    int n=num;
    
    while(num%2==0){
        cout<<2<<" ";
        num=num/2;
    }
    // for(int i=3;i<=sqrt(num);i=i+2){

    for(int i=3;i*i<=n;i=i+2){
        while(num%i==0){
            cout<<i<<" ";
            num=num/i;
        }
    }
    if(num>2){
        cout<<num<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    prime_factor(n);

    return 0;
}