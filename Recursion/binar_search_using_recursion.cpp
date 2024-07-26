#include <bits/stdc++.h>
using namespace std;
int binary(int arr[],int left,int right,int target){
    if(left>right){ 
            return -1; 
        }
        int mid=(left+right)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return binary(arr,left,mid-1,target);
        }
        else if(arr[mid]<target){
            return binary(arr,mid+1,right,target);
        }
        return -1;
}
int main() {
    int arr[]={1,2,3,8,9,12,15};
    int target=133;
    int n=sizeof(arr)/sizeof(int);
    int left=0;
    int right=n-1;
    

    int ans=binary(arr, left, right,target);
    cout<<ans<<endl;

    return 0;
}