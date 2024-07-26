#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<int>& arr,int mid,int m){
	int  n=arr.size();
	// student count
	int stud=1;
	int sum=0;
	for(int i=0;i<n;i++){
			sum+=arr[i];
			if(sum>mid){
				stud++;
				sum=arr[i];
			}
	}
	return stud<=m;
}


int32_t main() {
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int lo=*max_element(arr.begin(),arr.end());
	int hi=accumulate(arr.begin(),arr.end(),0);	//sum =0
	int ans=0;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(check(arr,mid,m)){
			ans=mid;
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}