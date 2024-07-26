#include <bits/stdc++.h>
using namespace std;
void NGR(vector<int>& arr,int n){
    vector<int> ans(n,-1);
    stack<int> st;
    st.push(arr[n-1]);
    ans[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?-1 : st.top();

        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<","<<ans[i]<<endl;
    }

}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        NGR(arr,n);
        cout<<endl;
    }
    return 0;
}