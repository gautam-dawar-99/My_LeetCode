  vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        int n=nums.size();
        st.push(nums[0]);
        for(int i=1;i<n;i++){
            bool flag=true;
            while(!st.empty() && st.top()>0 && nums[i]<0){
                if(abs(st.top())==abs(nums[i])){
                    st.pop();
                    flag=false;
                    break;
                }else if(abs(st.top())>abs(nums[i])){
                    flag=false;
                    break;
                }else if(abs(st.top())<abs(nums[i])){
                    st.pop();
                }
            }
            if(flag)
                st.push(nums[i]);
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }