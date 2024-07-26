// Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

 

// Example 1:

// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
// Example 2:

// Input: temperatures = [30,40,50,60]
// Output: [1,1,1,0]
// Example 3:

// Input: temperatures = [30,60,90]
// Output: [1,1,0]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> ngr(vector<int>&temp,int n){
        stack<int> st;
        vector<int> ans(n,-1);

        ans[n-1]=-1;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(!st.empty() && temp[st.top()]<=temp[i]){
                st.pop();
            }
            ans[i]=st.empty()?-1:st.top();

            st.push(i);
        }
        return ans;

    }
        vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans_idx=ngr(temperatures,n);
        vector<int>res;

        for(int i=0;i<n;i++){
            // res.push_back(ans_idx[i]-i);
            res.push_back(ans_idx[i] == -1 ? 0 : ans_idx[i] - i);
        }
        // for(int i=0;i<n;i++){
        //    if(ans_idx[i]==-1){
        //         res[i]=0;
        //    }
        //    else{
        //     res[i]=ans_idx[i]-i;
        //    }
        // }
        return res;
    }
};