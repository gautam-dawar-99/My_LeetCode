#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[][3]={{1,2,3},{4,5,6}};
    // number of rows
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    
    vector<int> arr1[][3]={{1,2,3},{4,5,6}};
    
    cout<<arr1.size()<<endl;
    cout<<arr1[0].size()<<endl;

    return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){

//     }
//     }
//     return 0;
// }