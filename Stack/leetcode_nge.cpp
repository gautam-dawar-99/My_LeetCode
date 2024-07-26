#include <bits/stdc++.h>
using namespace std;
// leetcode 502 nge
class Solution {
public:
   
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        unordered_map<int,int> mpp;

        mpp[nums2[n-1]]=-1;
        st.push(nums2[n-1]);

        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            mpp[nums2[i]]=st.empty()?-1:st.top();
            st.push(nums2[i]);
        }


        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            ans[i]=mpp[nums1[i]];
        }
        return ans;
    }
};

// leetcode 503
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        
        // Iterate twice over the array
        for (int i = 2 * n - 1; i >= 0; --i) {
            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }
            if (i < n) {
                ans[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i % n]);
        }
        
        return ans;
    }
};


