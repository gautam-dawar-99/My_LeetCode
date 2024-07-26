// #include <iostream>
// using namespace std;
// int power(int x,int n){
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*x;
//     }
//     return p;
// }

// int main() {
//     int n,m;
//     cin>>n>>m;
//     int ans=0;
//     for(int x=1;x<=1e9;x++){
//         if(power(x,n)==m){
//             ans=x;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 int findNthRoot(int n,int m){
        int l=1,r=m;
        while(l<=r){
            int mid=(l+r)/2;
            if(pow(mid,n)==m){
                return mid;
            }
            else if(pow(mid,n)<m){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return -1;
    }
int main() {
    int n,m;
    cin>>n>>m;
    int ans=findNthRoot(n,m);
    cout<<ans;
    
    return 0;
}