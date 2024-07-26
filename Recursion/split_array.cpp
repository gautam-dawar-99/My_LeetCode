#include<bits/stdc++.h>
using namespace std;
int count;
int split_array(int arr[],int i,int n,int target,vector<int> output,int count){
	if(i==n){
		if(target==0){
			for(int j=0;j<output.size();j++){
				cout<<output[j]<<" ";
			}
			cout<<endl;
			count++;
		}
		return count;
	}
	split_array(arr,i+1,n,target,output,count);

	output.push_back(arr[i]);
	split_array(arr,i+1,n,target-arr[i],output,count);
}
int main() {
	vector<int> output;
	int n;
	cin>>n;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	int cnt=split_array(arr,0,n,sum/2,output,0);
	cout<<cnt;
	return 0;
}