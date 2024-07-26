#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{	
	// vector<pair<int,int>> vec;
	
	// if(n<2){
	// 	vec.push_back(make_pair(-1,-1));
	// 	return vec;
	// }

	// sort(arr.begin(),arr.end());

	// for(int i=0;i<n-1;i++){
	// 	int low=i+1;
	// 	int high=n-1;
		
	// while(low<=high){
	// 	int mid=(low+high)/2;
	// 		// if(i==mid) continue;
	// 		int sum=arr[i]+arr[mid];

	// 		if(sum==target){
	// 			// vec.push_back(make_pair(arr[i],arr[mid]));
	// 			vec.push_back({arr[i],arr[mid]});
	// 			break;
	// 			low++
	// 		}
	// 		else if(sum>target){
	// 			high=mid-1;
	// 			}
	// 		else {
	// 				low = mid + 1;
	// 			}
    //     	}
    //     }

	// 	if(vec.empty()){
	// 		vec.push_back(make_pair(-1,-1));
	// 	}
    //     return vec;
	//  int n=arr.size();

    //     vector<pair<int,int>> ans;
    //     int flag=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(arr[i]+arr[j]==target){
    //                flag=1;
    //                ans.push_back({arr[i],arr[j]});
    //                //    ans.push_back(j);
    //                break;
    //             }
    //         }
    //     }
    //     if(flag==1){
    //      return ans;
    //     }
    //     else{
	// 		ans.push_back({-1,-1});
	// 		return ans;
    //         // return {-1,-1};
    //     }
    // }

	vector<pair<int,int>> ans;

	sort(arr.begin(),arr.end());
    int left=0,right=n-1;

    while(left<right){
        if(arr[left]+arr[right]==target){
			ans.push_back({arr[left],arr[right]});
            left++;
            right--;
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
        else{
            right--;
        }
    }
	if(ans.empty()){
        ans.push_back({-1, -1});
        return ans;
        }
        return ans;
}
