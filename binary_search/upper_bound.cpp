#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int x;
    cin>>x;

    // O(n) complexity 
    for(int i=0; i<n; i++){
        if(a[i]>x){
            cout<<i<<" "<<a[i]<<endl;
            break;
        }
    }
    
    // O(log n) complexity 
    int ans=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>x){
            ans = mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}