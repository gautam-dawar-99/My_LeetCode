// #include <iostream>
// using namespace std;
// // brute force for longest subarray with sum <= k
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     int k;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }   
//     cin>>k;

//     int maxlength=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum<=k){
//                 maxlength=max(maxlength,j-i+1); 
//             }
//             else if(sum>k)
//                 break;
//         }
//     }
//     cout<<maxlength;
//     return 0;
// }


#include <iostream>
using namespace std;
// better force for longest subarray with sum <= k
int main() {
    int n;
    cin>>n;
    int arr[n];
    int k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    cin>>k;
    int l=0,r=0,sum=0,maxlength=0;
    while(r<n){
        sum+=arr[r];
        while(sum>k){
            sum=sum-arr[l];
            l+=1;
        }
        if(sum<=k){
            maxlength=max(maxlength,r-l+1);
        }
        r+=1;
    }
    cout<<maxlength;

    return 0;
}
