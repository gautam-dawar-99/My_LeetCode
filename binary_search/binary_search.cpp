#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){
    int left=0,right=n-1;
    while(left<right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
    }
    return -1;
}
int main() {
    // Binary Search 
    int arr[]={1,2,4,6,8,10,12,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int ans=BinarySearch(arr,n,target);
    cout<<ans<<endl;
    return 0;
}