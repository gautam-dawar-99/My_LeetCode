#include<bits/stdc++.h>
using namespace std;
#define int long long

int BS(vector<int>& ps,int s,int e){
    int ans=-1;
    int lo=s,hi=e;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int left=ps[mid]-ps[s-1];
        int right=ps[e]-ps[mid];
        if(left==right ){
            ans=mid;
            hi=mid-1;
        }
        else if(left>right){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return ans;
}
int solve(vector<int>& ps,int s,int e){
    if(s>=e){
        return 0;
    }
    int ans=0;
    int ind=BS(ps,s,e);
    if(ind!=-1 && (ps[e]-ps[s-1])%2==0)
        ans=1+max(solve(ps,s,ind),solve(ps,ind+1,e));
    return ans;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int> ps(n+1);
        for(int i=0;i<n;i++){
            ps[i+1]=ps[i]+nums[i];
        }
        cout<<solve(ps,1,n)<<endl;
    }

    return 0;
}