// Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].

// Challenge : do this without division in linear time

// Input Format
// First line contains integer N as size of array.
// Next line contains a N integer as element of array. The product of any prefix or suffix of arr is NOT guaranteed to fit in a 32-bit integer.

// Constraints
// -10000000 < arr[i]<=10000000

// Output Format
// Print output array

// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 24 12 8 6 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n],product=1,ans[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product=arr[j]*product;
            }
        }
        ans[i]=product;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}