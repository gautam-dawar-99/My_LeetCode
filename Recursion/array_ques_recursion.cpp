#include<bits/stdc++.h>
using namespace std;

void print_all_indices_7(int a[],int n,int i){
    // base case
    if(i==n)
        return ;
    
    // mera kaam
    if(a[i]==7)
        cout<<i<<" ";
    // recursion ka kaam
    print_all_indices_7(a,n,i+1);
}

// last index of 7
int last_index_7(int a[], int n, int i){
    // base
    if(i==-1)
        return -1;
    
    // recursion
    if(a[i]==7)
        return i;

    return last_index_7(a,n,i-1);
}
// first index of 7
int first_index_7(int a[],int n,int i){
    // base case
    if(i==n)
        return -1;
    // recursion
    if(a[i]==7)
        return i;

    return first_index_7(a,n,i+1);
}

// contains
bool contains_7(int a[],int n,int i){
    // base 
    if(i==n)
        return false;
    
    if(a[i]==7)
        return true;
    // chota ans
    return contains_7(a,n,i+1);
}
int main(){
    int a[]={1,3,8,7,6,7,5,7,9};
    int n=sizeof(a)/sizeof(int);
    bool ans=contains_7(a,n,0);
    if(ans==true){
        cout<<"contains 7"<<endl;
    }else{
        cout<<"not contains 7"<<endl;
    }
    cout<<"first index"<<endl;
    cout<<first_index_7(a,n,0)<<endl;
    cout<<"last index"<<endl;
    cout<<last_index_7(a,n,n-1)<<endl;
    cout<<"All indices of 7-"<<endl;
    print_all_indices_7(a,n,0);
    return 0;
}

