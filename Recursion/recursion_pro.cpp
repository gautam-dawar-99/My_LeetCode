// multiply two numbers using recursion
// #include <iostream>
// using namespace std;
// int multiply(int x ,int y){
//     if(y == 0){
//         return 0;
//     }
//     return x+multiply(x,y-1);
// }
// int main() {
//     int x,y;
//     cin >> x >> y;
//     cout << x << " " << y << " "<<multiply(x,y) << endl;

//     return 0;
// }


// bubble sort using recursion sort
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) {
    if (n == 0)
        return;
    for (int i = 0; i < n ; i++)
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[]={4,3,2,1};
    int n=4;
    bubbleSort(arr, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}