vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){


            if(i>0&&nums[i]==nums[i-1]) continue;

            int left=i+1;
            int right=n-1;
            int target=-nums[i];
            while(left<right){
            if(nums[left]+nums[right]==target){
                v.push_back({nums[i],nums[left],nums[right]});

                // while (left < right && nums[left] == nums[left + 1]) ++left;
                // while (left < right && nums[right] == nums[right - 1]) --right;
                
                left++,right--;

            }
            else if(nums[left]+nums[right]>target){
                right--;
            }
            else if(nums[left]+nums[right]<target){
                left++;
                }   
            }
        }
        return v;
    }