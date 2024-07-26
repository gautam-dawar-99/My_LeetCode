// Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that reverses the array. Print the values in reversed array.

// 1.It reads a number N.
// 2.Take Another N numbers as input and store them in an Array.
// 3.Reverse the elements in the Array.
// 4.Print the reversed Array.

// Input Format
// First-line contains a single integer n denoting the size of the array.
// Next, N line contains a single integer denoting the elements of the array.

// Constraints
// N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000.

// Output Format
// Print the elements of the reversed array

// Sample Input
// 5
// 0
// 4 
// 6 
// 8 
// 9
// Sample Output
// 9 
// 8 
// 6 
// 4 
// 0 
// Explanation
// In the sample case , arr=[0,4,6,8,9] is reversed to arr=[9,8,6,4,0].
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={1,2,4,5,6,6,4,3,2,10};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n;i++) {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     for(int i=n-1;i>=0;i--) {
//         cout<<arr[i]<<" ";
//     }

//     int left=0;
//     int right=n-1;
//     int temp;
//     while(left<=right) {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     cout<<endl;
//     for(int i=0; i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int arr[10]={1,2,4,5,6,6,4,3,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n;i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=n-1;i>=0;i--) {
        cout<<arr[i]<<" ";
    }

    int left;
    int right;
    cout<<"\nEnter the left and right range [l,r] ";
    cin>>left>>right;

    left = left-1;
    right = right-1;
    while(left<=right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    cout<<endl;
    for(int i=0; i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}