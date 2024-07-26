#include <bits/stdc++.h>
using namespace std;
void NGR(vector<int>& arr,int n){
    vector<int> ans(n,-1);
    stack<int> st;
    st.push(arr[0]);
    ans[0]=-1;
    for(int i=1;i<n;i++) {
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