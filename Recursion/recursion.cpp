/*
Recursion -> Dividing the problems into subproblems and finding the answers of subproblems and use the answer of subproblems to find the answer

1.Base Case     smaleest problem of a bigger problem jiska answer hume pta ho
2.Assumption    recursion se small problem ko solve krna 
3.Finding Answer    badi problem ka ans using chota problem

4.Combining Answer

*/

// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     else
//     {
//         return fib(n-1)+fib(n-2);
//     }
// }

// int factorial(int num){
//     if(num==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num*factorial(num-1);
//     }
// }

// factorial of n 

// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int smallerAns=fact(n-1);
//     int biggerAns=n*smallerAns; // int biggerAns=n*fact(n-1);
//     return biggerAns;
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }

// sum of n natural numbers

// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     return n+sum(n-1);
// }
// int main() {
//     int n;

//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }

// Fibonacci Series

// #include <iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<fibonacci(n)<<endl;
//     for(int i=1;i<=n;i++){
//         cout<<fibonacci(i)<<" "; 
//     }
//     return 0;
// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// #include <iostream>
// using namespace std;
// bool is_Sorted(int arr[],int n){
//     if(n==0||n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     return is_Sorted(arr+1,n-1);
// }

// bool is_sorted( int arr[], int n ){
//     if(n==1){
//         return true;
//     }
//     return (arr[0]<=arr[1]) && is_sorted(arr+1,n-1);
    
    // bool isSmallerSorted = is_sorted(arr+1,n-1);
    // return (arr[0]<=arr[1])&&isSmallerSorted;
// }

// bool is_sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     return (arr[n-2]<=arr[n-1])&&is_sorted(arr,n-1);
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<is_sorted(arr,n)<<endl;

//     return 0;
// }
// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

#include <iostream>
using namespace std;
int print(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<" ";

    return print(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<print(n)<<endl;
    return 0;
}